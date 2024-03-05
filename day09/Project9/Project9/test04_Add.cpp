// date : 2024-03-05
// file : test04_Add.cpp
// desc : ��ü�� ���ϴ� add ����Լ�

/*
#include <iostream>

using namespace std;

class Point {
	int x, y;

public:
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		cout << "Operator" << endl;
	}

	Point Add(const Point & other) {
		return Point(x + other.x, y = other.y);
	}

	void ShowPoint() {
		cout << '[' << x << ", " << y << ']' << endl;
	}
};

int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.Add(pos2);
	pos3.ShowPoint();

	return 0;
}
*/

/*
#include <iostream>

using namespace std;

class Point {
	int x, y;

public:
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		cout << "Operator" << endl;
	}

	Point operator+(const Point& other) {						// �Լ����� add�� �ص� ������ ������ ��������� operator+�� ��������ν� �˾ƺ��� ����.
		return Point(x + other.x, y = other.y);
	}

	void ShowPoint() {
		cout << '[' << x << ", " << y << ']' << endl;
	}
};

int main()
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	pos3.ShowPoint();

	return 0;
}
*/