// date : 2024-02-21
// file : test08_Overloading.cpp
// desc : �����ε� (���� ����)

#include <iostream>

using namespace std;

void MyFunc(void)	// �Է��� �Ű������� �Ѵ�. C++�� �Ű������� �Է��� �ٸ��� ������ �Լ����̶� �����Ѵ�.
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)		// C++�� �Լ���, �Է°��� ������ ������ �Լ����� �ƴ����� �Ǵ��Ѵ�.		// ��°��� �������.
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

int main(void)	// �����Լ�
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}