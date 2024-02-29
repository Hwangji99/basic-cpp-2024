// date : 2024-02-29
// file : test08_Inheritance.cpp
// desc : 

/*
#include <iostream>
#include <cstring>

using namespace std;

class Person								// �θ� Ŭ����
{
private:
	char name[100];
	int age;

public:
	Person(const char* myname, int myage)
	{
		cout << "�θ� ������ ȣ��" << endl;
		age = myage;
		strcpy(name, myname);
	}

	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person		// Person�� �����ִ� Ŭ������� �ǹ�	// �ڽ� Ŭ����(��ӹ���)
{
	string major;						// Person���κ��� �ʵ带 ��ӹ޾� 3���� �� �� �ִ�	

public:
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage)		// �θ� �����ڸ� ȣ���ϸ鼭 �ʱ�ȭ�� �Ѵ�
	{
		cout << "�ڽ� ������ ȣ��" << endl;
		this->major = major;			// �ڽ� �ʵ�� ���⼭ �ʱ�ȭ
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main()
{
	UnivStudent u("Ȳ��ȯ", 26, "�ζǿ��Ӵ�÷�а���");					// 1. �ڽ� ��ü ����
	u.WhoAreYou();														// 2. ��ü ���� �� �θ� ������ ȣ��
																		// 3. �θ� �ʵ� �ʱ�ȭ
	return 0;															// 4. �ڽ� ������ ȣ��
}																		// 5. �ڽ� �ʵ� �ʱ�ȭ
																		// 6. WhoAreYou �Լ� ȣ��     // ��
*/