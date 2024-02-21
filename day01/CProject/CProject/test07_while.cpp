// date : 2024-02-21
// file : test07_while.cpp
// desc : 반복제어문 : while

#include <iostream>

using namespace std;

int main()
{

	int i = 1;	// i를 1로 초기화
	int sum = 0;
	while (i <= 100) {
		sum += i;	// sum = i + sum
		i++;	// 이 구문을 넣지 않으면 i가 1로 무한 반복되어 while문을 빠져나가지 못한다. 고로 넣어야함
		if (i == 11) break;	// break는 반복문을 빠져나갈 때 사용

	}
	cout << "누적된 sum값은 " << sum << " 입니다." << endl;

	return 0;
}