// date : 2024-02-29
// file : test11_ISAInheritance.cpp
// desc : p. 304

/*
#include <iostream>
#include <cstring>

using namespace std;

class Computer							// 부모(기초) 클래스
{
private:
	char owner[50];						// 배열

public:
	Computer(const char* name)
	{
		cout << "Computer 생성자" << endl;
		strcpy(owner, name);
	}

	void Calculate()
	{
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class NotebookComp : public Computer				// 컴퓨터를 상속받음
{
private:
	int Battery;

public:
	NotebookComp(const char * name, int initChag)
		:	Computer(name), Battery(initChag)
	{ 
		cout << "NotebookComp 생성자" << endl;
	}
	
	void Charing() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}
		
		cout << "이동하면서 ";
		Calculate();
		UseBattery();
	}

	int GetBatteryInfo() { return Battery; }
};

class TableNotebook : public NotebookComp		// 노트북 컴퓨터를 상속받음(컴퓨터도 사용 가능)
{
private:
	char regstPenModel[50];

public:
	TableNotebook(const char* name, int initChag, const char* pen)
		: NotebookComp(name, initChag)
	{
		cout << "TabletNotebook 생성자" << endl;
		strcpy(regstPenModel, pen);
	}

	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}

		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다.";
			return;
		}

		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}
};

int main(void)
{
	NotebookComp nc("손흥민", 33);
	TableNotebook tn("황지환", 26, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}
*/