#include <iostream>
#include "test15_FileDivi.h"

void Human::humanInfo()
{
	std::cout << "���� " << age << "����" << ' ' << job << ' ' << name << " �Դϴ�." << std::endl;
}

int main()
{
	Human h("Ȳ��ȯ", 26, "�ζ� ���� 2�� ��÷�� ���");
	h.humanInfo();
	return 0;
}