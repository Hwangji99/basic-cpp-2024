// date : 2024-02-27
// file : test03_Destructor.cpp
// desc : p.188

/*
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
	
public:
	Person(const char* myname, int myage)		// 입력 2개를 갖는 생성자
	{
		int len = strlen(myname) + 1;			// strlen()은 문자열의 길이를 구하는 함수	// +1을 하는 이유는 문자뒤에 Null자리를 집어넣기 위함
		name = new char[len];					// 문자열과 문자를 구분하는 방법			// 문자열이라는 표시를 하기 위해 (C에서만 이럼)
		strcpy(name, myname);					
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	
	~Person()									// 소멸자	// 자동으로 컴파일러가 호출시켜준다 (생성자도 마찬가지)
	{
		delete[]name;							// 객체가 자동으로 소멸되게 한다
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee chan gyu", 26);
	Person man2("Hwang ji hwan", 26);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/