#include "amazing-maze.h"

bool App::OnInit()
{
	if (!wxApp::OnInit())
		return false;

	MainFrame* mainWindow = new MainFrame("Amaze the Maze", wxDefaultPosition,
		wxSize(1280, 720));

	mainWindow->Show();
	return true;
}
