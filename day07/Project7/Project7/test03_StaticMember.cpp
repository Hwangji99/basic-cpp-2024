// date : 2024-02-29
// file : test03_StaticMember.cpp
// desc : p. 259

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	static int simObjCnt;		// 클래스변수 : static이 있으면 객체 없어도 사용가능

public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

int SoSimple::simObjCnt = 0;	// static 멤버 변수 초기화

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}

	SoComplex(SoComplex &copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}
*/