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
		printf("생성자 호출\n")
		arr = new int[len];
	}

	int& operator[] (int idx)
	{
		printf("[]연산자함수 호출\n");
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
		cout << "소멸자 호출" << endl;
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