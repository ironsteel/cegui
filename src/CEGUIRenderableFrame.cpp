/************************************************************************
	filename: 	CEGUIRenderableFrame.cpp
	created:	14/4/2004
	author:		Paul D Turner
	
	purpose:	Implementation of RenderableFrame
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://crayzedsgui.sourceforge.net)
    Copyright (C)2004 Paul D Turner (crayzed@users.sourceforge.net)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#include "CEGUIRenderableFrame.h"
#include "CEGUIImage.h"

// Start of CEGUI namespace section
namespace CEGUI
{

/*************************************************************************
	Default constructor for RenderableFrame
*************************************************************************/
RenderableFrame::RenderableFrame(void)
{
	d_left = d_right = d_top = d_bottom = NULL;
	d_topleft = d_topright = d_bottomleft = d_bottomright = NULL;
}


/*************************************************************************
	Destructor for RenderableFrame
*************************************************************************/
RenderableFrame::~RenderableFrame(void)
{
}


/*************************************************************************
	Set the images to use for the frame
*************************************************************************/
void RenderableFrame::setImages(const Image* topleft, const Image* topright, const Image* bottomleft, const Image* bottomright, const Image* left, const Image* top, const Image* right, const Image* bottom)
{
	d_topleft		= topleft;
	d_topright		= topright;
	d_bottomleft	= bottomleft;
	d_bottomright	= bottomright;

	d_left		= left;
	d_right		= right;
	d_top		= top;
	d_bottom	= bottom;
}


/*************************************************************************
	Drawing method for the frame
*************************************************************************/
void RenderableFrame::draw_impl(const Vector3& position, const Rect& clip_rect) const
{
	Vector3 final_pos(position);
	float	org_width = d_area.getWidth(), org_height = d_area.getHeight();
	Size	final_size;

	// calculate 'adjustments' required to accommodate corner pieces.
	float	coord_adj, size_adj;

	// draw top-edge, if required
	if (d_top != NULL) {

		// calculate adjustments required if top-left corner will be rendered.
		if (d_topleft != NULL) {
			size_adj = (d_topleft->getWidth() - d_topleft->getOffsetX());
			coord_adj = d_topleft->getWidth();
		}
		else {
			coord_adj	= 0;
			size_adj	= 0;
		}

		// calculate adjustments required if top-right corner will be rendered.
		if (d_topright != NULL) {
			size_adj += (d_topright->getWidth() + d_topright->getOffsetX());
		}

		final_size.d_width	= org_width - size_adj;
		final_size.d_height	= d_top->getHeight();
		final_pos.d_x		= position.d_x + coord_adj;

		d_top->draw(final_pos, final_size, clip_rect, d_colours);
	}

	// draw bottom-edge, if required
	if (d_bottom != NULL) {

		// calculate adjustments required if bottom-left corner will be rendered.
		if (d_bottomleft != NULL) {
			size_adj = (d_bottomleft->getWidth() - d_bottomleft->getOffsetX());
			coord_adj = d_bottomleft->getWidth();
		}
		else {
			coord_adj	= 0;
			size_adj	= 0;
		}

		// calculate adjustments required if bottom-right corner will be rendered.
		if (d_bottomright != NULL) {
			size_adj += (d_bottomright->getWidth() + d_bottomright->getOffsetX());
		}

		final_size.d_width	= org_width - size_adj;
		final_size.d_height	= d_bottom->getHeight();
		final_pos.d_x		= position.d_x + coord_adj;
		final_pos.d_y		= position.d_y + org_height - final_size.d_height;

		d_bottom->draw(final_pos, final_size, clip_rect, d_colours);
	}
	
	// reset x co-ordinate to input value
	final_pos.d_x = position.d_x;

	// draw left-edge, if required
	if (d_left != NULL) {

		// calculate adjustments required if top-left corner will be rendered.
		if (d_topleft != NULL) {
			size_adj = (d_topleft->getHeight() - d_topleft->getOffsetY());
			coord_adj = d_topleft->getHeight();
		}
		else {
			coord_adj	= 0;
			size_adj	= 0;
		}

		// calculate adjustments required if bottom-left corner will be rendered.
		if (d_bottomleft != NULL) {
			size_adj += (d_bottomleft->getHeight() + d_bottomleft->getOffsetY());
		}

		final_size.d_height	= org_height - size_adj;
		final_size.d_width	= d_left->getWidth();
		final_pos.d_y		= position.d_y + coord_adj;

		d_left->draw(final_pos, final_size, clip_rect, d_colours);
	}

	// draw right-edge, if required
	if (d_right != NULL) {

		// calculate adjustments required if top-left corner will be rendered.
		if (d_topright != NULL) {
			size_adj = (d_topright->getHeight() - d_topright->getOffsetY());
			coord_adj = d_topright->getHeight();
		}
		else {
			coord_adj	= 0;
			size_adj	= 0;
		}

		// calculate adjustments required if bottom-left corner will be rendered.
		if (d_bottomright != NULL) {
			size_adj += (d_bottomright->getHeight() + d_bottomright->getOffsetY());
		}


		final_size.d_height	= org_height - size_adj;
		final_size.d_width	= d_left->getWidth();
		final_pos.d_y		= position.d_y + coord_adj;
		final_pos.d_x		= position.d_x + org_width - final_size.d_width;

		d_right->draw(final_pos, final_size, clip_rect, d_colours);
	}

	// draw required corner pieces...
	if (d_topleft != NULL) {
		d_topleft->draw(position, clip_rect, d_colours);
	}

	if (d_topright != NULL) {
		final_pos.d_x = position.d_x + org_width - d_topright->getWidth();
		final_pos.d_y = position.d_y;
		d_topright->draw(final_pos, clip_rect, d_colours);
	}

	if (d_bottomleft != NULL) {
		final_pos.d_x = position.d_x;
		final_pos.d_y = position.d_y + org_height - d_bottomleft->getHeight();
		d_bottomleft->draw(final_pos, clip_rect, d_colours);
	}

	if (d_bottomright != NULL) {
		final_pos.d_x = position.d_x + org_width - d_bottomright->getWidth();
		final_pos.d_y = position.d_y + org_height - d_bottomright->getHeight();
		d_bottomright->draw(final_pos, clip_rect, d_colours);
	}

}


} // End of  CEGUI namespace section