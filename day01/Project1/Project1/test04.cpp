// date : 2024-02-21
// file : test04_if.cpp
// desc : if

#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}

/*
  제어문
	1. 선택제어문
		if, switch
	2. 반복제어문
		for, while

	* for(초기식; 조건식; 증감식) {
		1. 초기식을 가지고 조건을 따진다.
		2. 참이면 for문의 실행문을 실행
		3. 증감식을 실행
		4. 조건식을 따지고를 반복하다
		5. 거짓이면 반복문을 벗어남
	
	* }
*/