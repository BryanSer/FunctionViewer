#include "MainUI.h"

using namespace FunctionViewer;
int main(array<String ^> ^args) {
	Application::EnableVisualStyles();
	Application::Run(gcnew MainUI());
	return 0;
}


