// date : 2024-02-21
// file : test06_for.cpp
// desc : 반복제어문 : for

#include <iostream>

using namespace std;

int main()
{
	int sum = 0;	// sum을 0으로 초기화한다	// 누적값을 대입할 때는 초기화를 시켜줘야 한다
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}

	cout << "sum값은 " << sum << "입니다." << endl;

	return 0;
}