// date : 2024-03-07
// file : test01_ConvToPrimitive.cpp
// desc : p.492

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

	operator int()							//  �� ��ȯ �������� �����ε�	// �ϳ��� ����Լ�		// ����� ������ ��ȯ�� ����
	{										//	operator int�� int������ ��ȯ�ؾ� �ϴ� ��Ȳ���� ȣ��Ǵ� �Լ�
		return num;	
	}

	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num1;
	num1 = 30;
	Number num2 = num1 + 20;
	num2.ShowNumber();
	return 0;
}
*/