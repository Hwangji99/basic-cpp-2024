#include <iostream>
#include <cstring>
#include "test15_FileDivi.h"

Human::Human(const char* pname, int aage, const char* pjob, int aborn)
{
	strcpy(name, pname);
	age = aage;
	strcpy(job, pjob);
	born = aborn;
}
void Human::humanInfo()
{
	std::cout << "���� " << age << "����" << ' ' << job << ' ' << name << " �Դϴ�." << born << std::endl;
}

int main()
{
	Human h("Ȳ��ȯ", 26, "�ζ� ���� 2�� ��÷�� ���",990214);
	h.humanInfo();
	return 0;
}