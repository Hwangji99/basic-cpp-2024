// date : 2024-02-28
// file : test02_DeepCpy.cpp
// desc : DeepCopy

/* 깊은 복사
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
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person(const Person & copy)	: age(copy.age)		// 이렇게 복사 생성자를 만들면 기존의 객체 주소를 복사하여 새로 만들었기 때문에
	{												// 얕은 복사에서 일어나는 문제가 해결된다
		cout << "깊은 복사 생성자 호출" << endl;
		// this->name = copy.name;
		// this->age = copy.age;
		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->age = copy.age;						// 멤버 대 멤버 복사
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;					// 힙 영역에 할당받은 name을 반환한다	// m2가 m1을 가리키는데 m1이 사라지면서 문제가 발생한다
		cout << "called destructor!" << endl;									// 얕은 복사의 문제점↑
	}
};

int main(void)
{
	Person man1("Son heong min", 33);		// 스택에 저장되어 있는 Son heong min
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/