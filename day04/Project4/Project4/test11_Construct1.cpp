// date : 2024-02-26
// file : test11_Constructor.cpp
// desc : 

/*
#include <iostream>

using namespace std;

class MyClass		// 클래스 첫자는 대문자로
{
private:
	int num;

public:
	MyClass()							// 디폴트 생성자 : 매개변수를 가지기 않는 생성자	// 생성자를 만들지 않으면 자동으로 만들어짐
	{
		cout << "생성자 호출: MyClass()" << endl;
		num = 10;
	}
	MyClass(int anum) {					// 생성자 오버로딩
		cout << "생성자 호출: MyClass(int )" << endl;
		num = anum;
	}

	void MyClassInfo() {
		cout << "num: " << num << endl;
	}
};

int main()
{
	// MyClass *m = new MyClass();
	MyClass m1;							// 객체 생성 명령으로 생성자는 자동 호출 된다	// 생성자가 호출 안되면 객체가 안만들어진다
	m1.MyClassInfo();
	MyClass m2(20);
	m2.MyClassInfo();
	// MyClass m2();

	return 0;
}
*/
