// date : 2024-03-06
// file : test03_Improvelnit.cpp
// desc : p.453

/*
#include <iostream>

using namespace std;

class AAA
{
private:
	int num;

public:
	AAA(int n = 0) : num(n)											// 정수 하나를 입력으로 갖는 생성자
	{
		cout << "AAA(int n=0)" << endl;
	}

	AAA(const AAA& ref) : num(ref.num)								// 객체 하나를 입력으로 갖는 생성자
	{
		cout << "AAA(const AAA& ref)" << endl;
	}

	AAA& operator=(const AAA& ref)									// 대입연산자 오버로딩
	{
		num = ref.num;
		cout << "operator=(const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
private:
	AAA mem;														// AAA타입의 객체

public:
	BBB(const AAA& ref) : mem(ref) { }								// 멤버 이니셜라이저(콜론 초기화)를 통해서 초기화
};

class CCC
{
private:
	AAA mem;

public:
	CCC(const AAA& ref) { mem = ref; }								// 대입연산을 통해서 초기화
};

int main(void)
{
	AAA obj1(12);
	cout << "*********************" << endl;
	BBB obj2(obj1);
	cout << "*********************" << endl;
	CCC obj3(obj1);
	
	return 0;
}
*/

/*
// 배열 이름은 ary는 배열의 시작주소이다
int ary[3];  // 배열선언부에서 배열 인덱스에 있는 숫자는 방의 크기 (방이3개) ary[0], ary[1], ary[2]
ary[2];		// 코드 실행에서 배열 인덱스에 있는 숫자는 방 번호를 나타낸다 (2번방)

ary[0] = 10;	// 0번방, 첫번째방의 데이터
*(ary + 0) = 10;	// *(배열의 시작주소 + 0) = 10		// 괄호는 인덱스 연산자가 가진 의미

*(ary + 1) = 20;	==	ary[1] = 20;		// 1번 방에다 20을 집어넣어라

ary의 주소가 0x0011 이라면 다음방, 1번방(두번째방) 주소는 0x0015이다.

int* p;		// 선언부에 있는 포인터 표시
*p;			// 코드 실행에서 데이터를 참조
*/