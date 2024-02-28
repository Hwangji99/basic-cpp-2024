// date : 2024-02-28
// file : test08_ConstObj.cpp
// desc : p.244

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{ }

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	// obj.AddNum(20);			// AddNum은 const함수가 아니기 때문에 호출 불가능
	obj.ShowData();				// const 함수라 가능
	return 0;	
}
*/