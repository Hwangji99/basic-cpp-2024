// date : 2024-02-22
// file : test17_RefReturn2.cpp
// desc : p.83 예제, p.85 예제

/*
#include <iostream>

using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);		// num2는 또 다른 일반 변수 // 2

	num1+=1;
	num2+=100;						// 2 + 100
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}
*/

// 잘못된 참조의 반환
/*
#include <iostream>

using namespace std;

int& FuncOne(int n)
{
	int num = 20;
	num += n;
	return num;			// num = 30
}

int main(void)
{
	int& ref = FuncOne(10);		// num을 참조하지만 위에 함수는 num값을 반환한 뒤 소멸하기 때문에 잘못된 코딩이다 
	ref = 10;

	return 0;
}
*/