// date : 2024-02-23
// file : test02_malloc&free.cpp
// desc : MemMalFree

// �迭 �̸� -> �ּ�,  �迭�� ������ ������ for���� ���

/*
#include <iostream>
#include <string.h>
#include <stdlib.h>

// define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len)
{
	char * str = (char*)malloc(sizeof(char) * len);		// C:heap ������ len���� 20Byte  ũ��� �޸� �Ҵ�
	printf("char size: %llu\n", sizeof(char));			
	return str;
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}
*/


