#include <iostream>

using namespace std;	// namespace�� �ִ� std�� ����ϰڴ�

int main() 
{
	int a = 10;
	int b = 20;
	int b = 30;
	int ary[3] = { 10, 20, 30 };	// int Ÿ���� ��3���� ������
	ary[0] = 1111;	// ù��° �濡 1111�� ����־��
	ary[1] = 100;

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	return 0;
}

/*
�ڷ���
���� : ����(char) / ���ڿ�
���� : ����(int) / �Ǽ�(float)
*/