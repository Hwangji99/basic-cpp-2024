// date : 2024-03-06
// file : test05_ArrayClass.cpp
// desc : p.457

/*
#include <iostream>
#include <cstring>

using namespace std;

class BoundCheckInArray
{
private:
	int* arr;
	int arrlen;

public:
	BoundCheckInArray(int len) : arrlen(len)
	{
		printf("������ ȣ��\n")
		arr = new int[len];
	}

	int& operator[] (int idx)
	{
		printf("[]�������Լ� ȣ��\n");
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			BoundCheckInArray::~BoundCheckInArray();
			exit(1);
		}
		
		return arr[idx];
	}

	~BoundCheckInArray()
	{
		cout << "�Ҹ��� ȣ��" << endl;
		delete[]arr;
	}
};

int main(void)
{
	BoundCheckInArray arr(5);
	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;
	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;
	return 0;
}
*/