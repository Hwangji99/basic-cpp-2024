// date : 2024-02-28
// file : test07_RetObjDeadTime.cpp
// desc : p.238 (������ ����)

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;				// this�� ��ü ����Ʈ		// ��ü obj�� �ּ� ���
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;			// 40������ ���� ���� ������ ȣ�� ����  // ��ü ob�� �ּ� ���
	}

	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;

	}
};

SoSimple SimpleFuncObj(SoSimple ob)							// ob�� obj�� �����ѰŴ�
{
	cout << "Parm ADR: " << &ob << endl;					// ���⼭ &(����� &�� ����)�� �ּ� ������	// ��ü ob�� �ּҸ� ���
	return ob;												// �ӽ� ��ü�� �����Ǿ� �⺻ �����ڰ� ȣ��ȴ�
}															// �ӽ� ��ü ȣ�� ���� ob�� �Ҹ��ϰ� ���� �ӽ� ��ü�� �Ҹ��Ѵ� �ڡڡڡڡ�

int main(void)
{
	SoSimple obj(7);				// obj��� ��ü ����
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);					// ��ü tempRef�� SimpleFuncObj(obj)�� ���������ν� ���� ������ ȣ��
	cout << "Return Obj: " << &tempRef << endl;				// &tempRef�� �ӽ� ��ü�� �ּҸ� ����
	return 0;
}
*/