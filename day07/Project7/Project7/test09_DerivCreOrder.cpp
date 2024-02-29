// date : 2024-02-29
// file : test09_DerivDestOrder.cpp
// desc : p. 291

/*
#include <iostream>

using namespace std;

class SoBase
{
private:
	int baseNum;

public:

	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase() : " << baseNum <<endl;
	}

	~SoBase()
	{
		cout << "~SoBase() : " << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;

public:
	SoDerived(int n) : SoBase(n), derivNum(n)
	{
		cout << "SoDerived() : " << derivNum << endl;

	}

	~SoDerived()
	{
		cout << "~SoDerived() : " << derivNum << endl;

	}
};

int main(void)
{
	SoDerived drv1(15);				// 유도 클래스의 객체가 소멸될 때에는, 유도 클래스의 소멸자가 실행되고 난 다음에 기초 클래스의 소멸자가 실행됨
	SoDerived drv2(27);				// 스택에 생성된 객체의 소멸순서는 생성 순서와 반대
	return 0;
}
*/