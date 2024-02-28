// date : 2024-02-28
// file : test01_ShallCpyErr.cpp
// desc : ShallowCopyError (p.221)

/* 얕은 복사
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
		int len = strlen(myname) + 1;
		name = new char[len];			// 힙 영역에 myname으로 메모리 공간을 할당받고 스택에 있는 Son heong min 이라는 이름을 가리키는 주소를 담음
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
		delete[]name;					// 힙 영역에 할당받은 name을 반환한다	// m2가 m1을 가리키는데 m1이 소멸하면서 문제가 발생한다
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
