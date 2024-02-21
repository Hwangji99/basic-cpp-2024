// date : 2024-02-21
// file : test08_Overloading.cpp
// desc : 오버로딩 (다중 정의)

#include <iostream>

using namespace std;

void MyFunc(void)	// 입력을 매개변수라 한다. C++은 매개변수의 입력이 다르면 동일한 함수명이라도 인정한다.
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)		// C++은 함수명, 입력값을 가지고 동일한 함수인지 아닌지를 판단한다.		// 출력값은 상관없다.
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

int main(void)	// 메인함수
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}