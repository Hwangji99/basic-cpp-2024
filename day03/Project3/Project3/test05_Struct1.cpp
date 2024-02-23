// date : 2024-02-23
// file : test05_Struct1.cpp
// desc : C 타입의 구조체 : 멤버로 멤버 변수만 가진다

/*
#include <stdio.h>		// C타입

typedef struct human {			// human 구조체(내가 만든 사용자 정의 자료형)
	char name[20];		// 속성: 멤버변수(name, age, job)		// C++에서는 str	// 속성밖에 못가짐
	int age;
	char job[20];

}Human;			// 앞으로 human 구조체를 Human으로 사용하겠다

void showHuman(Human h)
{
	printf("name: %s age: %d jop: %s\n", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	human h1 = { "황지환", 26, "백수" };		// Human 타입의 변수를 선언하고 초기화를 시킨다
	showHuman(h1);

	return 0;
}
*/