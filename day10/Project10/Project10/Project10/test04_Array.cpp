// date : 2024-03-06
// file : test04_Array.cpp
// desc :

/*
#include <iostream>

int main()
{
	int arr[5] = { 1,2,3,4,5 };			// int�� �迭����
	int *parr = arr;					// �迭�� �̸��� �ּ��̴�		// �迭 = �ּ� �ܿ���!! �ڡڡڡڡ�

	printf("arr �ּ�: %p\n", arr);
	printf("arr ũ��: %d\n", sizeof(arr));		// int ũ�� 4 x �� ���� 5 = 20 byte

	printf("arr[0] �ּ�: %p\n", &arr[0]);		// �迭 0������ �ּ�, ù��° �� �ּ�
	printf("arr[1] �ּ�: %p\n", &arr[1]);		// �迭 1������ �ּ�, �ι�° �� �ּ�
	printf("arr + 1: %p\n", arr + 1);			// �迭 1������ �ּ�
	//===================================================

	printf("parr �ּ�:  %p\n", parr);
	printf("Parr ������: %p\n", parr);			// �迭 arr�� �ּҸ� �����ϰ� �ִ�
	printf("parr + 1: %p\n", parr + 1);			// �迭 1������ �ּ�
	printf("parr[0]: %d  *pa: %d  arr[0]: %d\n", parr[0], *parr, arr[0]);

	return 0;
}
*/