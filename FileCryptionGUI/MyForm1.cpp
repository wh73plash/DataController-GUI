#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles( );
    Application::SetCompatibleTextRenderingDefault(false);
    FileCryptionGUI::MyForm1 form;
    Application::Run(% form);
}