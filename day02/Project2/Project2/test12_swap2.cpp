// date : 2024-02-22
// file : test11_swap.cpp
// desc : swap 기능을 함수로 구현

/*
#include <iostream>

using namespace std;

void swap(int *aa, int *ab)		// 주소를 받을 수 있는 포인터 변수를 선언
{
	int temp;
	temp = *aa;					// 주소의 데이터를 참조	// a의 데이터 -> 10
	*aa = *ab;					// 주소의 데이터를 참조	// b의 데이터 -> 20
	*ab = temp;					// 10
}

int main()
{
	int a = 10;			// 지역변수
	int b = 20;	

	cout << "before: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap(&a, &b);			// 위에 선언된 swap 함수의 매개변수에 a,b 주소값을 보내 

	cout << "after: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;



	return 0;
}
*/
/*
	A & B		// 비트 연산자 : A와 B를 논리곱연산을 해라
	A && B		// 논리연산자 - 논리곱 : A가 참이고 B도 참인 경우 결과가 참, 2개가 다 1일 때만 리턴시켜준다 

	A = 10 여기서 10은 리터널이라고 칭한다
*/