// date : 2024-03-06
// file : test02_InherAssPoer.cpp
// desc : p.449

/*
#include <iostream>

using namespace std;

class First
{
private:
	int num1, num2;

public:
	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2)
	{ }

	void ShowData() { cout << num1 << ", " << num2 << endl; }

	First& operator=(const First& ref)					// 이 구문이 없어도 49행을 집어넣으면 값이 복사가 된다
	{
		cout << "First& operator=()" << endl;
		num1 = ref.num1;
		num2 = ref.num2;
		return *this;
	}
};

class Second : public First
{
private:
	int num3, num4;

public:
	Second(int n1, int n2, int n3, int n4)
		: First(n1,n2), num3(n3), num4(n4)
	{ }

	void ShowData() 
	{ 
		First::ShowData();
		cout << num3 << ", " << num4 << endl;
	}
	*/
	/*
	Second& operator=(const Second& ref)
	{
		cout << "Second& operator=()" << endl;
		// First::operator =(ref);				// 부모에 있는 디폴트 대입연사자 삽입
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}
	*//*
};

int main(void)
{
	Second ssrc(111, 222, 333, 444);
	Second scpy(0, 0, 0, 0);
	scpy = ssrc;
	scpy.ShowData();
	return 0;
}
*/