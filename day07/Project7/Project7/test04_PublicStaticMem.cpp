// date : 2024-02-29
// file : test04_PublicStaticMem.cpp
// desc : p. 261

/*
#include <iostream>

using namespace std;

class SoSimple {
public:								// 접근제한이 public
	static int simObjCnt;			// static 멤버 변수 선언(클래스 멤버)

public:
	SoSimple()
	{
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;		// static 멤버 변수의 초기화

int main(void)
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;				// 클래스 이름으로 static 멤버에 접근가능
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;

}
*/