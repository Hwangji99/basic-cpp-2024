// date : 2024-02-21
// file : test06_for.cpp
// desc : �ݺ���� : for

#include <iostream>

using namespace std;

int main()
{
	int sum = 0;	// sum�� 0���� �ʱ�ȭ�Ѵ�	// �������� ������ ���� �ʱ�ȭ�� ������� �Ѵ�
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}

	cout << "sum���� " << sum << "�Դϴ�." << endl;

	return 0;
}