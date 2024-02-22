// date : 2024-02-22
// file : test15_Refswap.cpp
// desc : 참조 연습

/*
#include <iostream>

using namespace std;

void swap(int& aa, int& ab)		// 주소를 받을 수 있는 참조를 선언
{
	int temp;
	temp = aa;					// 주소의 데이터를 참조	// a의 데이터 -> 10
	aa = ab;					// 주소의 데이터를 참조	// b의 데이터 -> 20
	ab = temp;					// 10
}

int main()
{
	int a = 10;			// 지역변수
	int b = 20;

	cout << "before: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap(a, b);			// 위에 선언된 swap 함수의 매개변수에 a,b 값을 보내 

	cout << "after: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;



	return 0;
}
*/