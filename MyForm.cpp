#include "MyForm.h"

[STAThreadAttribute]
int main(cli::array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	lab1Nimeric::MyForm form;
	Application::Run(% form);
}