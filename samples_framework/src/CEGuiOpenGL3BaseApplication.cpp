/***********************************************************************
filename:   CEGuiOpenGL3BaseApplication.cpp
created:    24/9/2004
author:     Paul D Turner
*************************************************************************/
/***************************************************************************
*   Copyright (C) 2004 - 2009 Paul D Turner & The CEGUI Development Team
*
*   Permission is hereby granted, free of charge, to any person obtaining
*   a copy of this software and associated documentation files (the
*   "Software"), to deal in the Software without restriction, including
*   without limitation the rights to use, copy, modify, merge, publish,
*   distribute, sublicense, and/or sell copies of the Software, and to
*   permit persons to whom the Software is furnished to do so, subject to
*   the following conditions:
*
*   The above copyright notice and this permission notice shall be
*   included in all copies or substantial portions of the Software.
*
*   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
*   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
*   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
*   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
*   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
*   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
*   OTHER DEALINGS IN THE SOFTWARE.
***************************************************************************/

// We need to include windows.h here before glfw is included (via
// CEGuiOpenGL3BaseApplication.h) or there will be a warning when GL.h includes
// windows.h (via GL3Renderer.h)
#if defined( __WIN32__ ) || defined( _WIN32 )
#include "windows.h"
#endif

#include "CEGuiOpenGL3BaseApplication.h"
#include "CEGUI/RendererModules/OpenGL/GL3Renderer.h"

//----------------------------------------------------------------------------//
CEGuiOpenGL3BaseApplication::CEGuiOpenGL3BaseApplication()
{
    initGLFW();
    setGLFWWindowCreationHints();
    createGLFWWindow();
    setGLFWAppConfiguration();

    d_renderer = &CEGUI::OpenGL3Renderer::create();
}

//----------------------------------------------------------------------------//
CEGuiOpenGL3BaseApplication::~CEGuiOpenGL3BaseApplication()
{
    CEGUI::OpenGL3Renderer::destroy(static_cast<CEGUI::OpenGL3Renderer&>(*d_renderer));
}

//----------------------------------------------------------------------------//
void CEGuiOpenGL3BaseApplication::setGLFWWindowCreationHints()
{
    glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, 3);
    glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, 2);
    glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

//----------------------------------------------------------------------------//

