#include <iostream>

using namespace std;	// namespace에 있는 std를 사용하겠다

int main() 
{
	int a = 10;
	int b = 20;
	int b = 30;
	int ary[3] = { 10, 20, 30 };	// int 타입의 방3개를 만들어라
	ary[0] = 1111;	// 첫번째 방에 1111을 집어넣어라
	ary[1] = 100;

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	return 0;
}

/*
자료형
문자 : 문자(char) / 문자열
숫자 : 정수(int) / 실수(float)
*/