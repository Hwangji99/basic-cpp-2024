// date : 2024-02-22
// file : test04_inlineFunc.cpp
// desc : 매크로 함수

/*
#include <iostream>

using namespace std;

inline int SQUARE(int x)		// 함수 앞에 인라인을 붙이면 인라인 함수가 된다(컴퓨터가 판단함)
{
	return x * x;
}

int main(void)
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
	return 0;
}
*/
/*
#include <iostream>
#define SQUARE(x) ((x)*(x))		// 매크로 함수	// 타입의 제약을 받지 않는다

using namespace std;

int main(void)
{
	cout << SQUARE(3) << endl;
	return 0;
}
*/