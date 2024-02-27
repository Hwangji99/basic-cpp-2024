// date : 2024-02-27
// file : test13_CpyConst4.cpp
// desc :

/*
#include <iostream>

using namespace std;

class B
{
private:
	int a;
	int b;

public:
	B(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	B(const B& r)
	{
		this->a = r.a;											// this로 값을 옮겨줘야 한다
		this->b = r.b;											// 아니면 이상한 값이 나옴
		cout << "B(const& B r) 복사 생성자 호출" << endl;
	}

	void BInfo()
	{
		cout << a << " " << b << endl;
	}
};

int main()
{
	B obj1(26, 59);
	obj1.BInfo();

	B obj2(obj1);
	obj2.BInfo();

	return 0;
}
*/