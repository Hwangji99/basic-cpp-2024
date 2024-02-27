// date : 2024-02-27
// file : test02_Private.cpp
// desc : p.186

/*
#include <iostream>

using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num (0) {}					// �̴ϼȶ������� ����� num�� 0���� �ʱ�ȭ��Ų��
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}				// 15���� ����� �´�
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);			// 33���̶� �ٸ� ��ü��
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);			// New �����ڸ� ���� ���� ���ο� �ּҸ� �Է��ϱ� ������ �ٸ� ��ü��
	obj2.ShowNum();

	delete& obj1;								// delete�� 2���� ������ �͸� ���� ��ġ�� �˾ƶ� ��.��
	delete& obj2;
	return 0;
}

// �����̺��� �� ������ -> �̱���
// �̱��� ������ ��ü ������ �� �ϳ��� �� �� ���
*/