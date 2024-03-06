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
		delete[]name;							// man2에 있는 황지환을 삭제하고 새롭게 손흥민을 넣기 위해서

		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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