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
		��� ���迡 �־ ��ü�����ʹ� �����ؾ� �Ѵ�
		�θ� Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����Ű�� ���(������) �ſ� �����ؾ� �Ѵ�
	*//*
	First* ptr = new Second("simple", "complex");
	delete ptr;

	return 0;
}
*/