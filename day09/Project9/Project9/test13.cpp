// date : 2024-03-05
// file : test13.cpp
// desc : 

/*
#include <iostream>

using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

	Point operator*(int times)
	{
		return Point(xpos * times, ypos * times);
	}

	void viewPoint()
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point operator+(const Point& ref)
	{
		return Point(xpos + ref.xpos, ypos + ref.ypos);
	}

	friend Point operator+(int val, const Point& ref); // friend ����

	friend ostream& operator<<(ostream& os, const Point& p);
};

// Point ��ü ����� ���� operator<< �����ε�
ostream& operator<<(ostream& os, const Point& p)
{
	os << '[' << p.xpos << ", " << p.ypos << ']';
	return os;
}

// int�� Point ��ü�� ������ ���� operator+ �����ε�
Point operator+(int val, const Point& ref)
{
	return Point(val + ref.xpos, ref.ypos);
}

int main(void)
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	cout << c << endl;
	cout << d << endl;
	cout << c << endl;

	return 0;
}
*/