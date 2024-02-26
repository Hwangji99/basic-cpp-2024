// date : 2024-02-26
// file : test15_ID.cpp
// desc : 복습 필수 ★★★★★★★★★★

/*
#include <iostream>
#include <cstring>

using namespace std;

class StudentClass
{
private:
	const int ID;							// 학번을 상수화
	char name[20];					// 문자열 배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통하여 초기화 한다 ★★★★★
	char major[40];
	int age;

public:
	// 문자열은 주소기 때문에 포인터 변수에 넣어서 사용한다 - 문장열의 첫번째 문자 주소가 저장된다
	// 멤버 이니셜라이저는 객체 생성시 초기화되지 않는 멤버들을 초기화할 때 사용한다. 즉, 객체 생성과 상관없이 미리 초기화가 되는 멤버들에 초기화 
	StudentClass(int aID, const char* pname, const char* pmajor, int aage) : ID(aID) {	// : ID(aID) <- 멤버 이니셜라이저를 통해 초기화를 시킴
		// ID = aID;
		strcpy(name, pname);		// 문자열은 strcpy를 사용하여 복사해서 집어 넣는다 // _CR SECURE 뭐시기 나오면 속성 전처리기 가서 넣으면 된다
		strcpy(major, pmajor);		// 문자열 배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통하여 초기화 한다
		age = aage;
	}

	void display() {
		cout << "ID: " << ID << endl;
		cout << "Name: " << name << endl;
		cout << "Major: " << major << endl;
		cout << "Age: " << age << endl;
	}
};

int main()
{
	StudentClass s(201811023, "황지환", "항공정보통신공학과", 26);	// 객체를 생성하면 생성자를 호출해야 한다
	s.display();

	return 0;
}
*/