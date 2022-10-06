#include "Window.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
	EVT_BUTTON(ONE, OnButtonClicked)
	EVT_BUTTON(TWO, OnButtonClicked)
	EVT_BUTTON(THREE, OnButtonClicked)
	EVT_BUTTON(FOUR, OnButtonClicked)
	EVT_BUTTON(FIVE, OnButtonClicked)
	EVT_BUTTON(SIX, OnButtonClicked)
	EVT_BUTTON(SEVEN, OnButtonClicked)
	EVT_BUTTON(EIGHT, OnButtonClicked)
	EVT_BUTTON(NINE, OnButtonClicked)
	EVT_BUTTON(ZERO, OnButtonClicked)
	EVT_BUTTON(PLUS, OnButtonClicked)
	EVT_BUTTON(MINUS, OnButtonClicked)
	EVT_BUTTON(MULTIPLY, OnButtonClicked)
	EVT_BUTTON(DIVIDE, OnButtonClicked)
	EVT_BUTTON(MODULUS, OnButtonClicked)
	EVT_BUTTON(RIGHT, OnButtonClicked)
	EVT_BUTTON(LEFT, OnButtonClicked)
	EVT_BUTTON(EQUALS, OnButtonClicked)
	EVT_BUTTON(NEGATIVE, OnButtonClicked)
	EVT_BUTTON(10000, OnButtonClear)
wxEND_EVENT_TABLE()

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
	button = new wxButton(this, PLUS, "+", wxPoint(275, 60), wxSize(75, 75));
	button->SetFont(font);
	// row 2
	button = new wxButton(this, ONE, "1", wxPoint(20, 140), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, TWO, "2", wxPoint(105, 140), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, THREE, "3", wxPoint(190, 140), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, MINUS, "-", wxPoint(275, 140), wxSize(75, 75));
	button->SetFont(font);
	// row 3
	button = new wxButton(this, FOUR, "4", wxPoint(20, 220), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, FIVE, "5", wxPoint(105, 220), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, SIX, "6", wxPoint(190, 220), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, MULTIPLY, "*", wxPoint(275, 220), wxSize(75, 75));
	button->SetFont(font);
	// row 4
	button = new wxButton(this, SEVEN, "7", wxPoint(20, 300), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, EIGHT, "8", wxPoint(105, 300), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, NINE, "9", wxPoint(190, 300), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, DIVIDE, "/", wxPoint(275, 300), wxSize(75, 75));
	button->SetFont(font);
	//row 5
	button = new wxButton(this, NEGATIVE, "-/+", wxPoint(20, 380), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, ZERO, "0", wxPoint(105, 380), wxSize(75, 75));
	button->SetFont(font);
	clearButton = new wxButton(this, 10000, "C", wxPoint(190, 380), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, MODULUS, "%", wxPoint(275, 380), wxSize(75, 75));
	button->SetFont(font);
	//row 6
	equalsButton = new wxButton(this, EQUALS, "=", wxPoint(20, 460), wxSize(160, 75));
	button->SetFont(font);
	button = new wxButton(this, LEFT, "(", wxPoint(190, 460), wxSize(75, 75));
	button->SetFont(font);
	button = new wxButton(this, RIGHT, ")", wxPoint(275, 460), wxSize(75, 75));
	button->SetFont(font);

	this->SetWindowStyle(wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER) & ~(wxMAXIMIZE_BOX));
}

Window::~Window() {

}

void Window::OnButtonClicked(wxCommandEvent& evt)
{
	BUTTONS id = (BUTTONS)evt.GetId();

	switch (id)
	{
	case Window::ONE:
		textbox->AppendText("1");
		break;
	case Window::TWO:
		textbox->AppendText("2");
		break;
	case Window::THREE:
		textbox->AppendText("3");
		break;
	case Window::FOUR:
		textbox->AppendText("4");
		break;
	case Window::FIVE:
		textbox->AppendText("5");
		break;
	case Window::SIX:
		textbox->AppendText("6");
		break;
	case Window::SEVEN:
		textbox->AppendText("7");
		break;
	case Window::EIGHT:
		textbox->AppendText("8");
		break;
	case Window::NINE:
		textbox->AppendText("9");
		break;
	case Window::ZERO:
		textbox->AppendText("0");
		break;
	case Window::PLUS:
		textbox->AppendText("+");
		break;
	case Window::MINUS:
		textbox->AppendText("-");
		break;
	case Window::MULTIPLY:
		textbox->AppendText("*");
		break;
	case Window::DIVIDE:
		textbox->AppendText("/");
		break;
	case Window::MODULUS:
		textbox->AppendText("%");
		break;
	case Window::LEFT:
		textbox->AppendText("(");
		break;
	case Window::RIGHT:
		textbox->AppendText(")");
		break;
	case Window::NEGATIVE:
		textbox->AppendText("-");
		break;
	case Window::EQUALS:
		std::string calculation = "";
		calculation.append(textbox->GetValue());

		int number1 = 0;
		int number2 = 0;
		char oper = 'a';
		std::string temp;
		
		for (int i = 0; i < calculation.size(); i++)
		{
			
			if (calculation[0] == '1' || calculation[0] == '2' || calculation[0] == '3' || calculation[0] == '4' || calculation[0] == '5' || calculation[0] == '6' || calculation[0] == '7' || calculation[0] == '8' || calculation[0] == '9' || calculation[0] == '0')
			{
				
				temp += calculation[0];
				calculation.erase(0, 1);
				number1 = std::stoi(temp);
			}
			if (calculation[0] == '+' || calculation[0] == '-' || calculation[0] == '*' || calculation[0] == '/' || calculation[0] == '%')
			{
				
				oper = calculation[0];
				calculation.erase(0, 1);
				number2 = std::stoi(calculation);
				break;
			}
			
		}

		int total{ 0 };
		wxString intString;
		
		switch (oper)
		{
		case '+':
			total = number1 + number2;
			intString << total;
			textbox->Clear();
			textbox->AppendText(intString);
			break;
		case '-':
			total = number1 - number2;
			intString << total;
			textbox->Clear();
			textbox->AppendText(intString);
			break;
		case '*':
			total = number1 * number2;
			intString << total;
			textbox->Clear();
			textbox->AppendText(intString);
			break;
		case '/':
			total = number1 / number2;
			intString << total;
			textbox->Clear();
			textbox->AppendText(intString);
			break;
		case '%':
			total = number1 % number2;
			intString << total;
			textbox->Clear();
			textbox->AppendText(intString);
			break;
		}
	}

	evt.Skip();
}

void Window::OnButtonClear(wxCommandEvent& evt)
{
	textbox->Clear();

	evt.Skip();
}

void Window::OnButtonConvert(wxCommandEvent& evt)
{
	
}

