// date : 2024-02-21
// file : test03.cpp
// desc : 

/*
#include <iostream>

int main(void) {
	int val1;	// 메모리 공간(RAM)에 int 크기로 할당을 받고 val이름으로 사용한다
	std::cout << "첫 번째 숫자입력: ";	// cout : 문자열을 출력
	std::cin >> val1;	// cin : val에 데이터를 입력

	int val2;
	std::cout << "두 번째 숫자입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;
	return 0;
}
*/

/*
  지역변수 = 로컬변수 : 선언되어진 범위 안에서만 사용이 가능
*/

/*
#include <iostream>

int global = 100;	// 전역변수 어디서든 사용가능

void func() {
	int a;		// 지역변수 이 중괄호에서만 사용 가능한 변수
	a = 100;
}

int main() {
	int a;
	int val;
	std::cout << "숫자입력: ";
	std::cin >> val;

	std::cout << "입력한 숫자는 " << val << "입니다." << std::endl;
	a = 10;
	val = 100;
	return 0;
}
*/
