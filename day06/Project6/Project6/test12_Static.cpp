// date : 2024-02-28
// file : test12_Static.cpp
// desc : p.255

/*
#include <iostream>

using namespace std;

void Counter()
{
	static int cnt;								// int cnt = 0; 으로 하면은  cnt가 1에서 함수가 끝나버려서
	cnt++;										// for문이 반복될 때마다 새로 다시 출력되기 때문에 계속 1만 출력된다
	cout << "Current cnt: " << cnt << endl;		// static을 쓰면 int cnt는 전역변수처럼 활용되기 때문에 1번만 초기화되서 값이 1씩 증가한다
}

int main(void)
{
	for (int i = 0; i < 10; i++) {				
		Counter();
		// cnt--;			// cnt는 Counter 함수안에서만 사용할 수 있다(스태틱을 붙였어도)
	}
	return 0;
}
*/