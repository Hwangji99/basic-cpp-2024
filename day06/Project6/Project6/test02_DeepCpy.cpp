// date : 2024-02-28
// file : test02_DeepCpy.cpp
// desc : DeepCopy

/* ���� ����
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Person
{
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		cout << "������ ȣ��" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person(const Person & copy)	: age(copy.age)		// �̷��� ���� �����ڸ� ����� ������ ��ü �ּҸ� �����Ͽ� ���� ������� ������
	{												// ���� ���翡�� �Ͼ�� ������ �ذ�ȴ�
		cout << "���� ���� ������ ȣ��" << endl;
		// this->name = copy.name;
		// this->age = copy.age;
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->age = copy.age;						// ��� �� ��� ����
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[]name;					// �� ������ �Ҵ���� name�� ��ȯ�Ѵ�	// m2�� m1�� ����Ű�µ� m1�� ������鼭 ������ �߻��Ѵ�
		cout << "called destructor!" << endl;									// ���� ������ ��������
	}
};

int main(void)
{
	Person man1("Son heong min", 33);		// ���ÿ� ����Ǿ� �ִ� Son heong min
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/