// date : 2024-02-29
// file : test13_Last.cpp
// desc : 

#include <iostream>
#include <cstring>

using namespace std;

class Myclass 
{
private:
	char name[30];
	int age;

public:
	Myclass(const char* myname, int myage)
	{
		strcpy(name, myname);
		age = myage;
	}

	string MyName() 
	{
		return name;
	}

	int Myage()
	{
		return age;
	}
	
};

class MyInfo : public Myclass
{
private:
	char pNumber[20];

public:
	MyInfo(const char* myname, int myage, const char* ppNumber)
	{
		strcpy(pNumber, ppNumber);
	}
	void printMyInfo()
	{
		cout << "나의 이름은 " << MyName() << " 이고 나이는 " << Myage() << " 살이며 전화번호는 " << pNumber << " 입니다." << endl;
	}
};

int main()
{
	MyInfo a("황지환", 26, "010-1234-5678");
	a.printMyInfo();

	return 0;
}