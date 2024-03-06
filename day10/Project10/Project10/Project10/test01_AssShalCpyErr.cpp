// date : 2024-03-06
// file : test01_AssShalCpyErr.cpp
// desc : p.446

/*
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person& operator = (const Person& ref)
	{
		delete[]name;							// man2�� �ִ� Ȳ��ȯ�� �����ϰ� ���Ӱ� ������� �ֱ� ���ؼ�

		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Son heung min", 33);
	Person man2("Hwang ji hwan", 26);
	man2 = man1;

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/