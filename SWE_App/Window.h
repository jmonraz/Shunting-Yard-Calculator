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
	void OnButtonConvert(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();

	enum BUTTONS
	{
		ONE,
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		ZERO,
		PLUS,
		MINUS,
		MULTIPLY,
		DIVIDE,
		MODULUS,
		EQUALS,
		RIGHT,
		LEFT
	};
};

