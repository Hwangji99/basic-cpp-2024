// date : 2024-02-28
// file : test05_RetObjCpyCon.cpp
// desc : p.232

/*
#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{ 
		cout << "SoSimple(int n) 생성자 호출" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;					
		return *this;
	}

	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)			// ob는 obj를 복사한다
{
	cout << "return 이전" << endl;
	return ob;								// 함수 호출이 끝나면 사라진다	// 그래서 임시 객체가 생성되어서 그곳에 저장되어 살아남음
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();		// Addnum이 실행되면 SimpleFuncObj는 사라진다.(서로 다른 명령이기 때문)
	//SoSimple re = SimpleFuncObj(obj);
	obj.ShowData();
	return 0;
}
*/