#pragma once
#include <wx/wx.h>
#include <GL/glew.h>
#include <wx/glcanvas.h>

class ViewPort : public wxGLCanvas
{
public:
	ViewPort(wxWindow* parent, const wxGLAttributes& canvasAttrs);
	~ViewPort();

	bool InitializeOpenGLFunctions();
	bool InitializeOpenGL();

	void OnPaint(wxPaintEvent& event);
	void OnSize(wxSizeEvent& event);
};

