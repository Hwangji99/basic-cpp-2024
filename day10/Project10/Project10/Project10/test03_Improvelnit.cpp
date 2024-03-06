// date : 2024-03-06
// file : test03_Improvelnit.cpp
// desc : p.453

/*
#include <iostream>

using namespace std;

class AAA
{
private:
	int num;

public:
	AAA(int n = 0) : num(n)											// ���� �ϳ��� �Է����� ���� ������
	{
		cout << "AAA(int n=0)" << endl;
	}

	AAA(const AAA& ref) : num(ref.num)								// ��ü �ϳ��� �Է����� ���� ������
	{
		cout << "AAA(const AAA& ref)" << endl;
	}

	AAA& operator=(const AAA& ref)									// ���Կ����� �����ε�
	{
		num = ref.num;
		cout << "operator=(const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
private:
	AAA mem;														// AAAŸ���� ��ü

public:
	BBB(const AAA& ref) : mem(ref) { }								// ��� �̴ϼȶ�����(�ݷ� �ʱ�ȭ)�� ���ؼ� �ʱ�ȭ
};

class CCC
{
private:
	AAA mem;

public:
	CCC(const AAA& ref) { mem = ref; }								// ���Կ����� ���ؼ� �ʱ�ȭ
};

int main(void)
{
	AAA obj1(12);
	cout << "*********************" << endl;
	BBB obj2(obj1);
	cout << "*********************" << endl;
	CCC obj3(obj1);
	
	return 0;
}
*/

/*
// �迭 �̸��� ary�� �迭�� �����ּ��̴�
int ary[3];  // �迭����ο��� �迭 �ε����� �ִ� ���ڴ� ���� ũ�� (����3��) ary[0], ary[1], ary[2]
ary[2];		// �ڵ� ���࿡�� �迭 �ε����� �ִ� ���ڴ� �� ��ȣ�� ��Ÿ���� (2����)

ary[0] = 10;	// 0����, ù��°���� ������
*(ary + 0) = 10;	// *(�迭�� �����ּ� + 0) = 10		// ��ȣ�� �ε��� �����ڰ� ���� �ǹ�

*(ary + 1) = 20;	==	ary[1] = 20;		// 1�� �濡�� 20�� ����־��

ary�� �ּҰ� 0x0011 �̶�� ������, 1����(�ι�°��) �ּҴ� 0x0015�̴�.

int* p;		// ����ο� �ִ� ������ ǥ��
*p;			// �ڵ� ���࿡�� �����͸� ����
*/