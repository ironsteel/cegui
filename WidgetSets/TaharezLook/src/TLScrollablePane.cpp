/************************************************************************
	filename: 	TLScrollablePane.cpp
	created:	1/3/2005
	author:		Paul D Turner
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://www.cegui.org.uk)
    Copyright (C)2004 - 2005 Paul D Turner (paul@cegui.org.uk)

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
#include "TLScrollablePane.h"

// Start of CEGUI namespace section
namespace CEGUI
{
    //////////////////////////////////////////////////////////////////////////
    // type name for this widget
    const utf8 TLScrollablePane::WidgetTypeName[] = "TaharezLook/ScrollablePane";
    // component widget type names
    const utf8* TLScrollablePane::HorzScrollbarTypeName = TLMiniHorzScrollbar::WidgetTypeName;
    const utf8* TLScrollablePane::VertScrollbarTypeName = TLMiniVertScrollbar::WidgetTypeName;
    //////////////////////////////////////////////////////////////////////////

    TLScrollablePane::TLScrollablePane(const String& type, const String& name) :
        ScrollablePane(type, name)
    {
    }

    TLScrollablePane::~TLScrollablePane(void)
    {
    }

    Scrollbar* TLScrollablePane::createHorizontalScrollbar(const String& name) const
    {
        Scrollbar* sbar = (Scrollbar*)WindowManager::getSingleton().createWindow(HorzScrollbarTypeName, name);
        // set min/max sizes
        sbar->setMinimumSize(Size(0.0f, 0.016667f));
        sbar->setMaximumSize(Size(1.0f, 0.016667f));

        return sbar;
    }

    Scrollbar* TLScrollablePane::createVerticalScrollbar(const String& name) const
    {
        Scrollbar* sbar = (Scrollbar*)WindowManager::getSingleton().createWindow(VertScrollbarTypeName, name);

        // set min/max sizes
        sbar->setMinimumSize(Size(0.0125f, 0.0f));
        sbar->setMaximumSize(Size(0.0125f, 1.0f));

        return sbar;
    }

    void TLScrollablePane::layoutComponentWidgets(void)
    {
        // set desired size for vertical scroll-bar
        Size v_sz(0.05f, 1.0f);
        d_vertScrollbar->setSize(v_sz);

        // get the actual size used for vertical scroll bar.
        v_sz = absoluteToRelative(d_vertScrollbar->getAbsoluteSize());

        // set desired size for horizontal scroll-bar
        Size h_sz(1.0f, 0.0f);

        if (d_abs_area.getHeight() != 0.0f)
        {
            h_sz.d_height = (d_abs_area.getWidth() * v_sz.d_width) / d_abs_area.getHeight();
        }

        // adjust length to consider width of vertical scroll bar if that is visible
        if (d_vertScrollbar->isVisible())
        {
            h_sz.d_width -= v_sz.d_width;
        }

        d_horzScrollbar->setSize(h_sz);

        // get actual size used
        h_sz = absoluteToRelative(d_horzScrollbar->getAbsoluteSize());


        // position vertical scroll bar
        d_vertScrollbar->setPosition(Point(1.0f - v_sz.d_width, 0.0f));

        // position horizontal scroll bar
        d_horzScrollbar->setPosition(Point(0.0f, 1.0f - h_sz.d_height));
    }

    Rect TLScrollablePane::getViewableArea(void) const
    {
        Rect tmp(0, 0, getAbsoluteWidth(), getAbsoluteHeight());

        if (d_vertScrollbar->isVisible())
        {
            tmp.d_right -= d_vertScrollbar->getAbsoluteWidth();
        }

        if (d_horzScrollbar->isVisible())
        {
            tmp.d_bottom -= d_horzScrollbar->getAbsoluteHeight();
        }

        return tmp;
    }

    void TLScrollablePane::drawSelf(float z)
    {
    }

} // End of  CEGUI namespace section