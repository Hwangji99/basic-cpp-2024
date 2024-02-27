// date : 2024-02-27
// file : test07_ThisPointer.cpp
// desc : p.196

/*
#include <iostream>
#include <cstring>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int num)	// : num(n)
	{
		this->num = num;						// this는 멤버 변수 num을 가리킨다
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	}
	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;		// 객체 자기 자신을 가리킨다
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();		// sim1 객체의 주소 값 저장
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();		// sim2 객체의 주소 값 저장
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	return 0;
}
*/