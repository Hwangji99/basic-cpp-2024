// date : 2024-02-28
// file : test04_PassObjCpyCon.cpp
// desc : p.230

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
		cout << "SoSimple(int n) constructor ȣ��" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "called SoSimple(const SoSimple &copy)" << endl;
	}

	void ShowData()					// ����Լ� --> ��ü �����ϰ� ��� ����
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)		// �����Լ�(�Ҽ�X) --> ���� �ҳ� �ٷ� ���ٰ���
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj (obj);
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;
}
*/