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
		this->a = r.a;											// this�� ���� �Ű���� �Ѵ�
		this->b = r.b;											// �ƴϸ� �̻��� ���� ����
		cout << "B(const& B r) ���� ������ ȣ��" << endl;
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