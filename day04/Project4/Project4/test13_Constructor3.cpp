// date : 2024-02-26
// file : test13_Constructor3.cpp
// desc : p.172

/*
#include <iostream>

using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	SimpleClass(int n1 = 0, int n2 = 0)		// sc처럼 받을 수 있는 입력 값이 2개여야 성립이 된다
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();
	SimpleClass mysc = sc1();		// 동일한 타입의 변수를 선언해 오른쪽의 호출한 함수 값을 저장한다
	mysc.ShowData();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);			// SimpleClass 타입의 객체 생성
	return sc;
}
*/