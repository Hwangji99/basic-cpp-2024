// date : 2024-02-28
// file : test06_IKnowTempObj.cpp
// desc : p.235

/*
#include <iostream>

using namespace std;

class Temporary
{
private:
	int num;

public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}

	~Temporary()
	{
		cout << "destroy obj: " << num << endl;

	}

	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temporary(100);			// 이름없는 임시 객체가 있다	// Temporary t(100); t같은 객체가 없다	// 생성되고 바로 사라짐
	cout << "************ after make!" << endl << endl;

	Temporary(200).ShowTempInfo();							// 마찬가지 출력 후 사라짐
	cout << "************ after make!" << endl << endl;

	const Temporary& ref = Temporary(300);			// 임시 객체 참조	// const를 지우면 에러가 뜬다(즉, 임시객체는 const를 붙이면 참조가 가능)
	cout << "************ after make!" << endl << endl;		// 마찬가지 출력 후 사라짐
		
	return 0;
}
*/