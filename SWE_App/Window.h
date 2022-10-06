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
	wxButton* clearButton = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);
	void OnButtonClear(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};

