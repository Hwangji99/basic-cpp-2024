/*
	객체 배열
*/

/*
#define _CRT_SECURE_NO_WARNINNGS
#include <iostream>
#include <cstring>

using namespace std;

class Human
{
private:
	char name[30];
	int age;

public:
	Human(const char *pname, int age)
	{
		cout << "생성자 호출" << endl;
		strcpy(name, pname);
		this->age = age;				// this를 쓰면 객체에 있는 필드 값을 가리킨다
	}

	void HumanInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Human()
	{
		cout << "소멸자 호출" << endl;
	}

};

int main()
{
	Human h[3] = { Human("황지환", 26), Human("손흥민", 33), Human("린가드", 18) }; // 객체배열
	

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 69);		// 힙영역에 객체를 생성하여 두 입력값을 집어넣으면서 생성자를 호출한다
	h1->HumanInfo();
	// h1.HumanInfo();							// 이 구문이 에러가 뜨는 이유는 호출하려는 h1이 주소형식이기 때문에 포인터에 접근하기
												// 위해 에로우 연산자 -> 를 써야한다

	delete h1;

	return 0;
}
*/