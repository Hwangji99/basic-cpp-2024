// date : 2024-02-27
// file : test04_DyniAllo.cpp
// desc : �޸� �����Ҵ� : new ������ ���, ���α׷� ���� �߿� �޸𸮸� �Ҵ� �޴´�							

/*
#include <iostream>

using namespace std;

int main()
{
	cout << "int size: " << sizeof(int) << endl;
	int *pi = new int;			// new �����ڸ� ����Ͽ� �������� intũ��(4byte)�� �޸𸮸� �Ҵ�޾� �Ҵ���� 
								// �޸��� �ּҸ� ���Ͻ����ش�		// new �����ڴ� �����ڸ� ȣ���Ѵ�

	*pi = 10;					// �ش� �ּҿ� 10�� �־��


	cout << "Pi�� ����Ű�� ���� ����� ��: " << *pi << endl;

	delete pi;					// ���� �Ҵ���� �޸� ������ ��ȯ�Ѵ�

	int *pary = new int[10];	// new �����ڸ� ����Ͽ� �������� �迭�����̸鼭 10�� ũ���� �޸𸮸� �Ҵ�޾� �Ҵ����
								// �޸��� �ּҸ� ���Ͻ����ش�
	for (int i = 0; i < 10; i++) {
		pary[i] = i + 10;		// �迭�� �� �濡 ����(���)���� ���� �ִ´� ex) pary[0] = 10
	}

	for (int i = 0; i < 10; i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete []pary;				// �迭�� �����Ҵ��� �޸𸮸� ��ȯ�Ѵ�	

	return 0;
}
*/