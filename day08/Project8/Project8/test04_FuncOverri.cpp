// date : 2024-03-04
// file : test04_FuncOverri.cpp
// desc : p.344

/*
#include <iostream>

using namespace std;

class First
{
public:
	void MyFunc()
	{
		cout << "FirstFunc" << endl;
	}
};

class Second : public First
{
public:
	void MyFunc()
	{
		cout << "SecondFunc" << endl;
	}
	
};

class Third : public Second
{
public:
	void MyFunc()
	{
		cout << "ThirdFunc" << endl;
	}

};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	// 객체포인터 타입을 기준으로 접근 범위가 결정된다
	// 오버라이딩된 경우는 부모 것은 자식 것으로 가려진다
	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	cout << ebdl;
	tptr->Second::MyFunc();

	delete tptr;
	return 0;
}
*/