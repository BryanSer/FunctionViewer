#include "MainUI.h"

using namespace FunctionViewer;
int main(array<String ^> ^args) {
	Console::WriteLine(calc("sin(pi)"));
	Application::EnableVisualStyles();
	Application::Run(gcnew MainUI());
	return 0;
}


