// date : 2024-02-27
// file : test02_Private.cpp
// desc : p.186

/*
#include <iostream>

using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num (0) {}					// 이니셜라이저를 사용해 num을 0으로 초기화시킨다
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}				// 15줄이 여기로 온다
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);			// 33줄이랑 다른 객체다
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);			// New 연산자를 통해 힙에 새로운 주소를 입력하기 때문에 다른 객체다
	obj2.ShowNum();

	delete& obj1;								// delete가 2개로 나뉘는 것만 봐도 눈치껏 알아라 ㅡ.ㅡ
	delete& obj2;
	return 0;
}

// 프라이빗에 들어간 생성자 -> 싱글톤
// 싱글톤 패턴은 객체 생성을 단 하나만 할 때 사용
*/