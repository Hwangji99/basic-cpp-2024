// date : 2024-02-29
// file : test08_Inheritance.cpp
// desc : 

/*
#include <iostream>
#include <cstring>

using namespace std;

class Person								// 부모 클래스
{
private:
	char name[100];
	int age;

public:
	Person(const char* myname, int myage)
	{
		cout << "부모 생성자 호출" << endl;
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

class UnivStudent : public Person		// Person에 속해있는 클래스라는 의미	// 자식 클래스(상속받음)
{
	string major;						// Person으로부터 필드를 상속받아 3개라 할 수 있다	

public:
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage)		// 부모 생성자를 호출하면서 초기화를 한다
	{
		cout << "자식 생성자 호출" << endl;
		this->major = major;			// 자식 필드는 여기서 초기화
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
	UnivStudent u("황지환", 26, "로또연속당첨학개론");					// 1. 자식 객체 생성
	u.WhoAreYou();														// 2. 객체 생성 전 부모 생성자 호출
																		// 3. 부모 필드 초기화
	return 0;															// 4. 자식 생성자 호출
}																		// 5. 자식 필드 초기화
																		// 6. WhoAreYou 함수 호출     // 끝
*/