// amazing-maze.cpp : This file contains the entry point. Program execution begins and ends there.
//

#pragma once
#include <iostream>
#include <wx/wx.h>
#include <GL/glew.h>

#include "ViewPort.h"

class App : public wxApp
{
public:
	bool OnInit();
};

wxIMPLEMENT_APP(App);

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

private:

};

MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size) :
	wxFrame(nullptr, wxID_ANY, title, pos, size)
{
	
}