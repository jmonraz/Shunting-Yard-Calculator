#pragma once
#include "wx/wx.h"


class Window : public wxFrame
{
public:
	Window();
	~Window();

public:
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxTextCtrl* textBox = nullptr;
	wxListBox* listBox = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);
	void OnButtonClickedDelete(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

