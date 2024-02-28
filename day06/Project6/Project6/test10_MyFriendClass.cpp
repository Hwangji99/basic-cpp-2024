// date : 2024-02-28
// file : test10_MyFriendClass.cpp
// desc : p.249

/*
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

// class Girl;				// class Girl�� �����Ŷ�� �� �̸� �˷��ִ� ����

class Boy
{
private:
	int height;
	friend class Girl;

public:
	Boy(int len) : height(len)
	{ }
	void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private:
	char phNum[20];

public:
	Girl(const char* num)				// const�� �ٿ����Ѵ�(å���� �ȵǾ��ִ�)
	{
		strcpy(phNum, num);
	}

	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)		// Boy:: �Ҽ��� �ٿ�����Ѵ�
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)		// Girl:: �Ҽ��� �ٿ�����Ѵ�
{
	cout << "His height: " << frn.height << endl;
}

int main(void)
{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}
*/