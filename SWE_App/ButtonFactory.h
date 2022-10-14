#pragma once
#include "wx/wx.h"
#include "Window.h"

class ButtonFactory

{
	wxButton* CreateButton(Window* win, wxWindowID id, const wxString str, const wxPoint point, const wxSize size, const wxFont font);
	wxButton* CreateClearButton(Window* win, wxWindowID id, const wxString str, const wxPoint point, const wxSize size);
	wxButton* CreateEqualsButton(Window* win, wxWindowID id, const wxString str, const wxPoint point, const wxSize size);
};

