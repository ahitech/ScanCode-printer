#include "Application.h"

MainApp::MainApp ()
	: BApplication ("application/x-vnd.hitech-ScanCode")
{

}


MainApp::~MainApp ()
{
	if (window)
	{
		window->Quit();
	}
}

void MainApp::ReadyToRun() {
    window = new AppWindow();
    window->Show();
}




int main()
{
	MainApp *app = new MainApp;
   /* Further initialization goes here -- read settings,
      set globals, etc. */
   app->Run();
   /* Clean up -- write settings, etc. */
   delete be_app;
   return 0;
}
