#pragma once
#include "wx/wx.h"


class Window : public wxFrame
{
public:
	Window();
	~Window();

public:
	wxTextCtrl* textbox = nullptr;
	wxButton* button = nullptr;

	/*wxDECLARE_EVENT_TABLE();*/
};

