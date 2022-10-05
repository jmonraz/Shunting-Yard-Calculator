#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
	EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

#define WINDOW_WIDTH 400
#define WINDOW_HEIGHT 700
Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(300, 300), wxSize(WINDOW_WIDTH, WINDOW_HEIGHT)) {
	wxFont font(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	textBox = new wxTextCtrl(this, wxID_ANY, "", wxPoint(WINDOW_WIDTH - 380, WINDOW_HEIGHT - 690), wxSize(350, 25));
	button1 = new wxButton(this, 10001, "C", wxPoint(WINDOW_WIDTH - 380, WINDOW_HEIGHT - 660), wxSize(350, 40));
	button1->SetFont(font);
	button1 = new wxButton(this, 10001, "=", wxPoint(WINDOW_WIDTH - 380, WINDOW_HEIGHT - 615), wxSize(350, 40));
	button1->SetFont(font);
	/*button1 = new wxButton(this, 10001, "Sum", wxPoint(10, 10), wxSize(100, 100));
	button1->SetFont(font);
	button1 = new wxButton(this, wxID_ANY, "Multiply", wxPoint(125, 10), wxSize(100, 100));*/
	/*button1->SetFont(font);*/
	
	/*listBox = new wxListBox(this, wxID_ANY, wxPoint(10, 200), wxSize(150, 200));*/
	
	
	

	this->SetWindowStyle(wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER) & ~(wxMAXIMIZE_BOX));
}

Window::~Window() {

}

void Window::OnButtonClicked(wxCommandEvent& evt) {
	/*listBox->AppendString(textBox->GetValue());
	evt.Skip();*/
}

void Window::OnButtonClickedDelete(wxCommandEvent& evt) {
	
}