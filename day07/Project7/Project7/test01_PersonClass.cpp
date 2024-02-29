// date : 2024-02-29
// file : test01_PersonClass.cpp
// desc : 

/* ★★★★★(기억하라)
#include <iostream>
#include <cstring>

using namespace std;

class Person			// class 자체는 메모리를 할당받지 않는다
{
private:
	char* name;			// 객체를 생성해야 필드를 사용(접근)할 수 있다
	int age;			// 멤버함수와 멤버변수는 객체꺼다(객체가 없으면 사용할 수 없다)

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
		cout << "안녕 날 소개하지 이름은 " << name << " 나이는 " << age << "살이야 방가방가" << endl;
	}

	~Person()
	{
		delete[]name;
	}
};

int main(void)
{
	Person p("황지환", 26);
	p.PersonInfo();

	Person copyp(p);
	copyp.PersonInfo();

	return 0;
}
*/