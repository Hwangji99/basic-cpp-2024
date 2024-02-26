// date : 2024-02-26
// file : test12_Constructor2.cpp
// desc : p.169

/*
#include <iostream>

using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	SimpleClass()								// 기본 생성자
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}	
	*/
	/*											// 매개변수 초기화		// 디폴트 매개변수
	SimpleClass(int n1 = 0, int n2 = 0)			// 이 구문이 들어가면 모호한 경우가 발생할 수 있다(에러)
	{
		num1 = n1;
		num2 = n2;
	}
	*/
/*
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;				// 디폴트 생성자 호출
	sc1.ShowData();

	SimpleClass sc2(100);			// 두번째 생성자 호출
	sc2.ShowData();

	SimpleClass sc3(100, 200);		// 세번째 생성자 호출
	sc3.ShowData();
	return 0;
}
*/