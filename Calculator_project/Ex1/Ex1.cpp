// Ex1.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"

using namespace Ex1;

[STAThreadAttribute]
int main(cli::array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
