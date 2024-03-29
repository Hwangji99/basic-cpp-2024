// date : 2024-02-23
// file : test06_Struct2.cpp
// desc : C++ 타입의 구조체 : 구조체 멤버로 멤버 변수와 멤버 함수를 가진다

/*
#include <iostream>				// C++타입

typedef struct human {			// human 구조체(내가 만든 사용자 정의 자료형)
	char name[20];				// 속성: 멤버변수(name, age, job)		// C++에서는 str
	int age;
	char job[20];

	void showHuman()			// 기능 : 멤버함수	// 구조체 안에 소속되었으므로 입력을 따로 받을 필요 없음
	{
		printf("name: %s age: %d jop: %s\n", name, age, job);
	}

}Human;


int main()
{
	int a = 10;
	human h1 = { "황지환", 26, "백수" };		// Human 타입의 변수를 선언하고 초기화를 시킨다
	h1.showHuman();								// showHuman이라는 메서드에 접근한다

	return 0;
}
*/