// date : 2024-02-29
// file : test03_StaticMember.cpp
// desc : p. 259

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	static int simObjCnt;		// Ŭ�������� : static�� ������ ��ü ��� ��밡��

public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};

int SoSimple::simObjCnt = 0;	// static ��� ���� �ʱ�ȭ

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}

	SoComplex(SoComplex &copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
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