// date : 2024-02-29
// file : test10_DestModel.cpp
// desc : p. 293

/*
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;

public:
	Person(const char* myname)
	{
		cout << "부모 생성자 호출 " << endl;
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}

	~Person()
	{
		delete[]name;
	}

	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person							// private < protected < public
{
private:
	char* major;

public:
	UnivStudent(const char* myname, const char* mymajor)
		: Person(myname)
	{
		cout << "자식 생성자 호출 " << endl;
		major = new char[strlen(myname) + 1];
		strcpy(major, mymajor);
	}

	~UnivStudent()
	{
		delete[]major;
	}

	void WhoAreYou() const
	{
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent st1("Hwang", "Lotto");
	st1.WhoAreYou();
	UnivStudent st2("Son", "Soccer");
	st2.WhoAreYou();
	return 0;
}
*/