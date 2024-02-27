// date : 2024-02-27
// file : test06_ObjPtrArr.cpp
// desc : p.194

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
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << ", ";
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
	Person* parr[3];					// 객체 포인터 배열
	char namestr[100];
	char * strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;
		parr[i] = new Person(namestr, age);		// 힙영역에 객체를 생성
	}

	parr[0]->ShowPersonInfo();					// ->(애로우 연산자) : 주소(포인터)를 통해 데이터에 접근할 때 사용		// 내 설명
	parr[1]->ShowPersonInfo();					// 객체 포인터를 가지고 멤버에 접근한다(->)		// 선생님 설명
	parr[2]->ShowPersonInfo();

	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}
*/