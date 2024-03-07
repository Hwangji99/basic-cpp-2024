// date : 2024-03-07
// file : test01_ConvToObj.cpp
// desc : p.490

/*
#include <iostream>

using namespace std;

class Number
{
private:
	int num;

public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}

	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{*/
	/*
		int a = 10;
		int b = a;
		double d = 3.14;
		a = d; (타입 불일치라 불가능)
		d = a; (d가 a보다 커서 가능)
	*/
/*
	Number num;
	num = 30;							//	num = Number(30); <- 1단계. 임시객체의 생성
										//	num.operator=(Number(30));	<- 2단계. 임시객체의 대상으로 하는 대입 연산자의 호출
	num.ShowNumber();
	return 0;
}
*/