// date : 2024-02-26
// file : test12_Constructor2.cpp
// desc : p.169

/*
#include <iostream>

using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	SimpleClass()								// �⺻ ������
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}	
	*/
	/*											// �Ű����� �ʱ�ȭ		// ����Ʈ �Ű�����
	SimpleClass(int n1 = 0, int n2 = 0)			// �� ������ ���� ��ȣ�� ��찡 �߻��� �� �ִ�(����)
	{
		num1 = n1;
		num2 = n2;
	}
	*/
/*
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;				// ����Ʈ ������ ȣ��
	sc1.ShowData();

	SimpleClass sc2(100);			// �ι�° ������ ȣ��
	sc2.ShowData();

	SimpleClass sc3(100, 200);		// ����° ������ ȣ��
	sc3.ShowData();
	return 0;
}
*/