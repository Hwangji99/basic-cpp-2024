// date : 2024-02-21
// file : test09_pmmd.cpp
// desc : 연산자

#include <iostream>

using namespace std;

int add(int a, int b)		// 함수 add를 선언
{
	int result;
	result = a + b;			// result 값에 a와 b의 합을 집어넣는다 
	return result;			// result 값을 반환한다
}

int min(int a, int b)		// 함수 minus를 선언
{
	int result;
	result = a - b;			// result 값에 a와 b의 차를 집어넣는다
	return result;			// result 값을 반환한다
}

int multi(int a, int b)	// 함수 multiple를 선언
{
	int result;
	result = a * b;			// result 값에 a와 b의 곱을 집어넣는다
	return result;			// result 값을 반환한다
}

float divi(int a, int b)	// 함수 divide를 선언
{
	float result;
	result = a / b;			// result 값에 a와 b의 나눈값을 집어넣는다
	return result;			// result 값을 반환한다
}

int main(void)
{
	char inKey;				// 문자변수 선언
	int num1, num2;

	while (true) {

		std::cout << "연산자를 입력하시오 > (종료를 원할 시 X를 입력하시오.) ";
		std::cin >> inKey;

		if (inKey == 'X') {					// X를 누르면 프로그램 종료, 아니면 +,-,*,/를 넣으면 계속 돌아간다
			std::cout << "종료!" << std::endl;
			break;
		}

		std::cout << "두 수를 입력하시오 > ";
		std::cin >> num1 >> num2;

		if (inKey == '+') {
			std::cout << "\n결과 : " << add(num1, num2) << std::endl;
		}

		else if (inKey == '-') {
			std::cout << "\n결과 : " << min(num1, num2) << std::endl;
		}

		else if (inKey == '*') {
			std::cout << "\n결과 : " << multi(num1, num2) << std::endl;
		}

		else if (inKey == '/') {
			std::cout << "\n결과 : " << divi(num1, num2) << std::endl;
		}
	}

	return 0;
}