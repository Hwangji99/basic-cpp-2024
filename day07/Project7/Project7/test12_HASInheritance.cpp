// date : 2024-02-29
// file : test12_HASInheritance.cpp
// desc : p. 307

/*
#include <iostream>
#include <cstring>

using namespace std;

class Gun
{
private:
	int bullet;
	
public:
	Gun(int bnum) : bullet(bnum)
	{
		cout << "부모 호출" << endl;
	}
	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}

	int getbullet()
	{
		return bullet;
	}
};

class Police : public Gun
{
private:
	int handcuffs;

public:
	Police(int bnum, int bcuff)
		: Gun(bnum), handcuffs(bcuff)
	{ }
	void state()
	{
		cout << getbullet() << ", " << handcuffs << endl;
	}

	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
};

int main(void)
{
	Police pman(5, 3);
	pman.state();
	pman.Shot();
	pman.PutHandcuff();
	pman.state();
	return 0;
}
*/