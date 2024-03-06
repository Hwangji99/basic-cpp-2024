// date : 2024-03-06
// file : test07_PointerOperOverload.cpp
// desc : p.478


/*
#include <iostream>

using namespace std;

class Number
{
private:
	int num;

public:
	Number(int n) : num(n) { }
	void ShowData() { cout << num << endl; }

	Number* operator->()
	{
		return this;
	}

	Number& operator*()
	{
		return *this;
	}
};

int main(void)
{
	Number num(20);
	num.ShowData();

	(*num) = 30;
	num->ShowData();
	(*num).ShowData();
	return 0;
}
*/