// date : 2024-02-22
// file : test17_RefReturn2.cpp
// desc : p.83 ����, p.85 ����

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
	int num2 = RefRetFuncOne(num1);		// num2�� �� �ٸ� �Ϲ� ���� // 2

	num1+=1;
	num2+=100;						// 2 + 100
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}
*/

// �߸��� ������ ��ȯ
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
	int& ref = FuncOne(10);		// num�� ���������� ���� �Լ��� num���� ��ȯ�� �� �Ҹ��ϱ� ������ �߸��� �ڵ��̴� 
	ref = 10;

	return 0;
}
*/