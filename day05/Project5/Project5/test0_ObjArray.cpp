/*
	��ü �迭
*/

/*
#define _CRT_SECURE_NO_WARNINNGS
#include <iostream>
#include <cstring>

using namespace std;

class Human
{
private:
	char name[30];
	int age;

public:
	Human(const char *pname, int age)
	{
		cout << "������ ȣ��" << endl;
		strcpy(name, pname);
		this->age = age;				// this�� ���� ��ü�� �ִ� �ʵ� ���� ����Ų��
	}

	void HumanInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Human()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}

};

int main()
{
	Human h[3] = { Human("Ȳ��ȯ", 26), Human("�����", 33), Human("������", 18) }; // ��ü�迭
	

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("������", 69);		// �������� ��ü�� �����Ͽ� �� �Է°��� ��������鼭 �����ڸ� ȣ���Ѵ�
	h1->HumanInfo();
	// h1.HumanInfo();							// �� ������ ������ �ߴ� ������ ȣ���Ϸ��� h1�� �ּ������̱� ������ �����Ϳ� �����ϱ�
												// ���� ���ο� ������ -> �� ����Ѵ�

	delete h1;

	return 0;
}
*/