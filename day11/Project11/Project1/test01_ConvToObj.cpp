// date : 2024-03-07
// file : test01_ConvToObj.cpp
// desc : p.490

/*
#include <iostream>

using namespace std;

class Number
{
private:
	int num;

public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}

	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{*/
	/*
		int a = 10;
		int b = a;
		double d = 3.14;
		a = d; (Ÿ�� ����ġ�� �Ұ���)
		d = a; (d�� a���� Ŀ�� ����)
	*/
/*
	Number num;
	num = 30;							//	num = Number(30); <- 1�ܰ�. �ӽð�ü�� ����
										//	num.operator=(Number(30));	<- 2�ܰ�. �ӽð�ü�� ������� �ϴ� ���� �������� ȣ��
	num.ShowNumber();
	return 0;
}
*/