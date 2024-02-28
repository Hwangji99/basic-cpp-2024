// date : 2024-02-28
// file : test07_RetObjDeadTime.cpp
// desc : p.238 (괜찮은 예제)

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;				// this는 객체 포인트		// 객체 obj의 주소 출력
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;			// 40항으로 인해 복사 생성자 호출 먼저  // 객체 ob의 주소 출력
	}

	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;

	}
};

SoSimple SimpleFuncObj(SoSimple ob)							// ob는 obj를 복사한거다
{
	cout << "Parm ADR: " << &ob << endl;					// 여기서 &(선언시 &는 참조)는 주소 연산자	// 객체 ob의 주소를 출력
	return ob;												// 임시 객체가 생성되어 기본 생성자가 호출된다
}															// 임시 객체 호출 이후 ob가 소멸하고 이후 임시 객체도 소멸한다 ★★★★★

int main(void)
{
	SoSimple obj(7);				// obj라는 객체 생성
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);					// 객체 tempRef에 SimpleFuncObj(obj)를 대입함으로써 복사 생성자 호출
	cout << "Return Obj: " << &tempRef << endl;				// &tempRef는 임시 객체의 주소를 저장
	return 0;
}
*/