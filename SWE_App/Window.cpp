#include "Window.h"

//wxBEGIN_EVENT_TABLE(Window, wxFrame)
//	EVT_BUTTON(10001, OnButtonClicked)
//wxEND_EVENT_TABLE()

#define WINDOW_WIDTH 390
#define WINDOW_HEIGHT 600

Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(WINDOW_WIDTH, WINDOW_HEIGHT)) {
	wxFont font(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	textbox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(20, 10), wxSize(330, 40));
	textbox->SetFont(font);
	// row 1
	button = new wxButton(this, wxID_ANY, "Sin", wxPoint(20, 60), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "Cos", wxPoint(105, 60), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "Tan", wxPoint(190, 60), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "+", wxPoint(275, 60), wxSize(75, 75));
	button->SetFont(font);
	// row 2
	button = new wxButton(this, wxID_ANY, "1", wxPoint(20, 140), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "2", wxPoint(105, 140), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "3", wxPoint(190, 140), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "-", wxPoint(275, 140), wxSize(75, 75));
	button->SetFont(font);
	// row 3
	button = new wxButton(this, wxID_ANY, "4", wxPoint(20, 220), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "5", wxPoint(105, 220), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "6", wxPoint(190, 220), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "*", wxPoint(275, 220), wxSize(75, 75));
	button->SetFont(font);
	// row 4
	button = new wxButton(this, wxID_ANY, "7", wxPoint(20, 300), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "8", wxPoint(105, 300), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "9", wxPoint(190, 300), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "/", wxPoint(275, 300), wxSize(75, 75));
	button->SetFont(font);
	//row 5
	button = new wxButton(this, wxID_ANY, "-/+", wxPoint(20, 380), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "0", wxPoint(105, 380), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "C", wxPoint(190, 380), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "%", wxPoint(275, 380), wxSize(75, 75));
	button->SetFont(font);
	//row 6
	button = new wxButton(this, wxID_ANY, "=", wxPoint(20, 460), wxSize(160, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, "(", wxPoint(190, 460), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, wxID_ANY, ")", wxPoint(275, 460), wxSize(75, 75));
	button->SetFont(font);
}

Window::~Window() {

}
