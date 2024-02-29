// date : 2024-02-29
// file : test01_PersonClass.cpp
// desc : p. 256

/*
#include <iostream>

using namespace std;

int simObjCnt = 0;				// 전역변수
int cmxObjCnt = 0;				// 전역변수

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

class SoComplex
{
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 Socomplex 객체" << endl;
	}

	SoComplex(SoComplex &copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 Socomplex 객체" << endl;
	}
};

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();				// 임시객체 생성		// 생성자 호출
	return 0;
}
*/