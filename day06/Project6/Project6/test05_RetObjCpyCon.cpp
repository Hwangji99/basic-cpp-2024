// date : 2024-02-28
// file : test05_RetObjCpyCon.cpp
// desc : p.232

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
		cout << "SoSimple(int n) ������ ȣ��" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;					
		return *this;
	}

	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)			// ob�� obj�� �����Ѵ�
{
	cout << "return ����" << endl;
	return ob;								// �Լ� ȣ���� ������ �������	// �׷��� �ӽ� ��ü�� �����Ǿ �װ��� ����Ǿ� ��Ƴ���
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();		// Addnum�� ����Ǹ� SimpleFuncObj�� �������.(���� �ٸ� ����̱� ����)
	//SoSimple re = SimpleFuncObj(obj);
	obj.ShowData();
	return 0;
}
*/