// date : 2024-03-05
// file : test11_FirOperOverload.cpp
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

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete []name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Son heong min", 33);
	Person man2("Hwang ji hwan", 26);
	man2 = man1;

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;

}
*/