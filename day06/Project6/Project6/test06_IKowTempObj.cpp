// date : 2024-02-28
// file : test06_IKnowTempObj.cpp
// desc : p.235

/*
#include <iostream>

using namespace std;

class Temporary
{
private:
	int num;

public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}

	~Temporary()
	{
		cout << "destroy obj: " << num << endl;

	}

	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temporary(100);			// �̸����� �ӽ� ��ü�� �ִ�	// Temporary t(100); t���� ��ü�� ����	// �����ǰ� �ٷ� �����
	cout << "************ after make!" << endl << endl;

	Temporary(200).ShowTempInfo();							// �������� ��� �� �����
	cout << "************ after make!" << endl << endl;

	const Temporary& ref = Temporary(300);			// �ӽ� ��ü ����	// const�� ����� ������ ���(��, �ӽð�ü�� const�� ���̸� ������ ����)
	cout << "************ after make!" << endl << endl;		// �������� ��� �� �����
		
	return 0;
}
*/