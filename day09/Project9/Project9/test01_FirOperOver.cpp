// date : 2024-03-05
// file : test01_FirOperOver.cpp
// desc : p.402 , p.406(연산자 오버로딩 설명)

/*
#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;
		
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const		// 보여주기만 하는 함수이기 때문에 값이 변하면 안되서 뒤에 const를 붙여준다
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point operator+(const Point& ref)		// 객체 생성	// operator 는 속성(객체끼리)들을 더해준다	
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
};

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);			// 멤버함수의 연산자 오버로딩
	Point pos4 = pos2.operator+(pos3);			// 더하기 할 입력값을 입력값에 넣는다	// +말고도 *, -, / 등을 붙여서 계산할 수 있다

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}
*/