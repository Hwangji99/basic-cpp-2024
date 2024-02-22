// date : 2024-02-22
// file : test02_DelfaltValue2.cpp
// desc : 매개변수의 디폴트 값

/*
#include <iostream>						// 프로그램은 위에서부터 아래로 실행된다

using namespace std;

int Adder(int num1 = 1, int num2 = 2);	// 함수 선언	// 사용할 함수는 메인함수 위에 있어야 한다(아니면 에러뜸)

int main(void)
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;			// 함수 호출
	cout << Adder(3, 5) << endl;
	return 0;
}

int Adder(int num1, int num2)			// 함수 정의
{
	return num1 + num2;
}
*/

// 함수 정의를 호출보다 밑에 작성할 시 호출 위에 함수를 선언해줘야 한다 ★★★★★
// 클래스 안에 들어가는 함수 -> 메서드 ★★★★

/*
#include <iostream>

using namespace std;

void func();			// 함수 선언

int main()
{
	func();				// 호출
	return 0;
}

void func()				// 사용자 함수
{
	cout << "func()" << endl;
}
*/