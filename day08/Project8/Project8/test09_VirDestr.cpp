// date : 2024-03-04
// file : test09_VirDestr.cpp
// desc : p.357

/*
#include <iostream>

using namespace std;

class First
{
private:
	char* strOne;

public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}

	virtual ~First()
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;

public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}

	virtual ~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};

int main(void)
{*/
	/*
		상속 관계에 있어서 객체포인터는 조심해야 한다
		부모 타입의 객체 포인터로 자식 객체를 가리키는 경우(다형성) 매우 주의해야 한다
	*//*
	First* ptr = new Second("simple", "complex");
	delete ptr;

	return 0;
}
*/