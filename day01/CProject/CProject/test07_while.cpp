// date : 2024-02-21
// file : test07_while.cpp
// desc : �ݺ���� : while

#include <iostream>

using namespace std;

int main()
{

	int i = 1;	// i�� 1�� �ʱ�ȭ
	int sum = 0;
	while (i <= 100) {
		sum += i;	// sum = i + sum
		i++;	// �� ������ ���� ������ i�� 1�� ���� �ݺ��Ǿ� while���� ���������� ���Ѵ�. ��� �־����
		if (i == 11) break;	// break�� �ݺ����� �������� �� ���

	}
	cout << "������ sum���� " << sum << " �Դϴ�." << endl;

	return 0;
}