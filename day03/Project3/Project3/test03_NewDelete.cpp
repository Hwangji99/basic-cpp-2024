// date : 2024-02-23
// file : test03_NewDelete.cpp
// desc : NewDelete

/*
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char* str = new char[len];			// new �����ڸ� ���� ���� ��ü�� �����Ѵ�
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	// free(str);
	delete []str;
	return 0;
}
*/