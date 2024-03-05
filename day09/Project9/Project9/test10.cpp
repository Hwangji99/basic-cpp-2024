// date : 2024-03-05
// file : test10.cpp
// desc : 연산자 오버로딩

/*
#include <iostream>

using namespace std;

class Myclass {
private:
	int x;

public:
	Myclass(int y = 0) : x(y)
	{ }
	void print() const
	{
		cout << "value: " << x << endl;
	}

	Myclass operator+(const Myclass& ref)
	{
		Myclass z(x + ref.x);
		return z;
	}
};

int main()
{
	Myclass a(10);
	a.print();								// value: 10

	Myclass b(a);
	b.print();								// value: 10

	Myclass c(b);
	c.print();								// value: 10

	Myclass d = a + b + c;
	d.print();								// value: 30
	return 0;

}
*/