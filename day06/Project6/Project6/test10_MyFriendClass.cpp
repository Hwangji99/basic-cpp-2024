// date : 2024-02-28
// file : test10_MyFriendClass.cpp
// desc : p.249

/*
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

// class Girl;				// class Girl이 있을거라는 걸 미리 알려주는 거임

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
	Girl(const char* num)				// const를 붙여야한다(책에는 안되어있다)
	{
		strcpy(phNum, num);
	}

	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)		// Boy:: 소속을 붙여줘야한다
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)		// Girl:: 소속을 붙여줘야한다
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