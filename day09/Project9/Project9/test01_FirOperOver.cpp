// date : 2024-03-05
// file : test01_FirOperOver.cpp
// desc : p.402 , p.406(������ �����ε� ����)

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
	void ShowPosition() const		// �����ֱ⸸ �ϴ� �Լ��̱� ������ ���� ���ϸ� �ȵǼ� �ڿ� const�� �ٿ��ش�
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point operator+(const Point& ref)		// ��ü ����	// operator �� �Ӽ�(��ü����)���� �����ش�	
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
};

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);			// ����Լ��� ������ �����ε�
	Point pos4 = pos2.operator+(pos3);			// ���ϱ� �� �Է°��� �Է°��� �ִ´�	// +���� *, -, / ���� �ٿ��� ����� �� �ִ�

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}
*/