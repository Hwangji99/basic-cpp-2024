// date : 2024-02-27
// file : test09_SelfRef.cpp
// desc : p.200

/*
#include <iostream>

using namespace std;

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n) : num(n)
	{
		cout << "梓端 持失" << endl;
	}
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;			// this = obj(梓端 切奄切重)
	}
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}
*/