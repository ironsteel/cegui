/************************************************************************
	filename: 	texture.cpp
	created:	10/4/2004
	author:		Paul D Turner
	
	purpose:	Implements texture class for D3D8.1 system
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
#include "renderers/directx81GUIRenderer/texture.h"
#include "renderers/directx81GUIRenderer/renderer.h"
#include "CEGUIExceptions.h"

#include <d3dx8.h>
#include <dxerr8.h>


// Start of CEGUI namespace section
namespace CEGUI
{

/*************************************************************************
	Constructor
*************************************************************************/
DirectX81Texture::DirectX81Texture(Renderer* owner) :
	Texture(owner)
{
	d_d3dtexture = NULL;
}

/*************************************************************************
	Destructor
*************************************************************************/
DirectX81Texture::~DirectX81Texture(void)
{
	freeD3DTexture();
}

/*************************************************************************
	Load texture from file.  Texture is made to be same size as image in
	file.
*************************************************************************/
void DirectX81Texture::loadFromFile(const String& filename)
{
	freeD3DTexture();
	
	D3DXIMAGE_INFO texInfo;
	HRESULT hr = D3DXCreateTextureFromFileEx(((DirectX81Renderer*)getRenderer())->getDevice(), (char*)filename.c_str(), 
						D3DX_DEFAULT, D3DX_DEFAULT, 1, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT,
						0, &texInfo, NULL, &d_d3dtexture);

	if (SUCCEEDED(hr))
	{
		d_width		= texInfo.Width;
		d_height	= texInfo.Height;
	}
	else
	{
		throw RendererException((utf8*)"Failed to create Texture object from file '" + filename + "'.  Additional Info: " + (const utf8*)DXGetErrorString8(hr));
	}

}


/*************************************************************************
	Load texture from raw memory.	
*************************************************************************/
void DirectX81Texture::loadFromMemory(const void* buffPtr, uint buffWidth, uint buffHeight)
{
	// release old texture
	if (d_d3dtexture != NULL)
	{
		d_d3dtexture->Release();
		d_d3dtexture = NULL;
	}

	// calculate square size big enough for whole memory buffer
	uint tex_size = std::max(buffWidth, buffHeight);

	// create a texture
	// TODO: Check resulting pixel format and react appropriately.
	HRESULT hr = D3DXCreateTexture(((DirectX81Renderer*)getRenderer())->getDevice(), tex_size, tex_size, 1, 0, D3DFMT_A8R8G8B8, D3DPOOL_MANAGED, &d_d3dtexture);

	if (FAILED(hr))
	{
		throw RendererException((utf8*)"Failed to load texture from memory: D3D Texture creation failed.");
	}
	else
	{
		D3DSURFACE_DESC	texdesc;
		d_d3dtexture->GetLevelDesc(0, &texdesc);

		// store new size;
		d_width		= texdesc.Width;
		d_height	= texdesc.Height;

		// lock the D3D texture
		D3DLOCKED_RECT	rect;
		hr = d_d3dtexture->LockRect(0, &rect, NULL, D3DLOCK_DISCARD);

		if (FAILED(hr))
		{
			d_d3dtexture->Release();
			d_d3dtexture = NULL;

			throw RendererException((utf8*)"Failed to load texture from memory: IDirect3DTexture8::LockRect failed.");
		}
		else
		{
			// copy data from buffer into texture
			ulong* dst = (ulong*)rect.pBits;
			ulong* src = (ulong*)buffPtr;

			for (uint i = 0; i < buffHeight; ++i)
			{
				for (uint j = 0; j < buffWidth; ++j)
				{
					dst[j] = src[j];
				}

				dst += rect.Pitch / sizeof(ulong);
				src += buffWidth;
			}

			d_d3dtexture->UnlockRect(0);
		}

	}

}


/*************************************************************************
	safely release D3D texture associated with this Texture
*************************************************************************/
void DirectX81Texture::freeD3DTexture(void)
{
	if (d_d3dtexture != NULL)
	{
		d_d3dtexture->Release();
		d_d3dtexture = NULL;
	}

}


/*************************************************************************
	allocate a D3D texture >= 'size'.  Previous D3D texture is lost
*************************************************************************/
void DirectX81Texture::setD3DTextureSize(uint size)
{
	freeD3DTexture();

	HRESULT hr = D3DXCreateTexture(((DirectX81Renderer*)getRenderer())->getDevice(), size, size, 1, 0, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &d_d3dtexture);

	if (FAILED(hr))
	{
		throw RendererException((utf8*)"Failed to create texture of specified size: D3D Texture creation failed.");
	}
	else
	{
		D3DSURFACE_DESC	texdesc;
		d_d3dtexture->GetLevelDesc(0, &texdesc);

		// store new size;
		d_width		= texdesc.Width;
		d_height	= texdesc.Height;
	}

}

} // End of  CEGUI namespace section