// date : 2024-02-29
// file : test01_PersonClass.cpp
// desc : 

/* �ڡڡڡڡ�(����϶�)
#include <iostream>
#include <cstring>

using namespace std;

class Person			// class ��ü�� �޸𸮸� �Ҵ���� �ʴ´�
{
private:
	char* name;			// ��ü�� �����ؾ� �ʵ带 ���(����)�� �� �ִ�
	int age;			// ����Լ��� ��������� ��ü����(��ü�� ������ ����� �� ����)

public:
	Person(const char* myname, int myage)
	{ 
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person(const Person& copy) : age(copy.age)
	{
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->age = copy.age;
	}

	void PersonInfo()
	{
		cout << "�ȳ� �� �Ұ����� �̸��� " << name << " ���̴� " << age << "���̾� �氡�氡" << endl;
	}

	~Person()
	{
		delete[]name;
	}
};

int main(void)
{
	Person p("Ȳ��ȯ", 26);
	p.PersonInfo();

	Person copyp(p);
	copyp.PersonInfo();

	return 0;
}
*/