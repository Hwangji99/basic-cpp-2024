// date : 2024-02-23
// file : test04_NewObject.cpp
// desc : NewObject

// New를 사용해서 객체를 만들려면 Class와 동일한 이름이어야 한다 ★
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

class Simple			
{
public:
	Simple()						// 생성자(클래스 이름과 같은 메서드)
	{
		cout << "I'm simple constructor!" << endl;
	}

};

int main(void)
{
	cout << "case 1 : ";
	Simple* sp1 = new Simple;		// 클래스는 또 하나의 타입이라 포인트변수 선언시 사용할 수 있다
									// 힙영역에 New를 사용하여 심플이라는 객체를 생성 -> 스택에 있는 심플 타입에 sp1이라는 포인터 변수에 저장
	cout << "case 2 : ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple)*1);	// sizeof(Simple)*1 은 심플 하나 크기에 메모리를 할당한다는 의미

	cout << endl << "end of main" << endl;
	delete sp1;						// 객체를 반환한다 "I'm simple constructor!" 문장 반환
	free(sp2);						// malloc은 새로 만든 객체, 기본 자료형은 되지만 Simple처럼 내가 만든 것은 안된다
	return 0;
}
*/