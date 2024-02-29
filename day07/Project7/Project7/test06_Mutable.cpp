// date : 2024-02-29
// file : test06_Mutable.cpp
// desc : p. 265 (아주 좋은 코드)

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2;							// mutable : const 함수 내에서 값의 변경을 예외적으로 허용

public:
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{ }
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}

	void CopyToNum2() const
	{
		num2 = num1;							// 값의 변경을 허락한다
	}
};

int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}
*/