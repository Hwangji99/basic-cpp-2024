// date : 2024-03-04
// file : test04_FuncOverri.cpp
// desc : p.344

/*
#include <iostream>

using namespace std;

class First
{
public:
	void MyFunc()
	{
		cout << "FirstFunc" << endl;
	}
};

class Second : public First
{
public:
	void MyFunc()
	{
		cout << "SecondFunc" << endl;
	}
	
};

class Third : public Second
{
public:
	void MyFunc()
	{
		cout << "ThirdFunc" << endl;
	}

};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	// ��ü������ Ÿ���� �������� ���� ������ �����ȴ�
	// �������̵��� ���� �θ� ���� �ڽ� ������ ��������
	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	cout << ebdl;
	tptr->Second::MyFunc();

	delete tptr;
	return 0;
}
*/