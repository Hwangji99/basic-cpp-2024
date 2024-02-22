// date : 2024-02-22
// file : test09.cpp
// desc : 전역변수와 지역변수

/*
#include <iostream>

using namespace std;

int global = 100;		// 전역변수 - 프로그램 전체에서 사용 가능
int global1 = 200;


int main()
{
	int val = 100;		// 지역변수 - 선언된 범위에서만 사용 가능
	global = 200;


	int global1 = 300;
	cout << "전역변수 global: " << global << endl;
	cout << "지역변수 : " << val << endl;

	cout << "전역변수 global1: " << global1 << endl;	// 지역변수와 이름이 동일할  경우는 전역변수는 가려진다
														// 둘이 붙으면 지역변수가 우선
	return 0;
}

void func()
{
	int val = 0;	// 메인함수에서의 val과 다른 놈이다
	global = 10;
	global1 = 10;
	val = 10;		// 변수 선언을 하지않고 적으면 메인함수를 벗어나서 오류가 뜬다
}
*/

/*
  C 에서 메모리
  1. 스택 : 지역변수, 매개변수
  2. heap : 사용자에게 할당된 영역
		사용을 할려면 malloc()으로 할당을 받고 - free()로 반환(필수)
  3. data : 함수, 전역변수, 상수, 문자리터럴
*/