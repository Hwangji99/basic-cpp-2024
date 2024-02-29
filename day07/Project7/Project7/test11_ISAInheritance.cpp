// date : 2024-02-29
// file : test11_ISAInheritance.cpp
// desc : p. 304

/*
#include <iostream>
#include <cstring>

using namespace std;

class Computer							// �θ�(����) Ŭ����
{
private:
	char owner[50];						// �迭

public:
	Computer(const char* name)
	{
		cout << "Computer ������" << endl;
		strcpy(owner, name);
	}

	void Calculate()
	{
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class NotebookComp : public Computer				// ��ǻ�͸� ��ӹ���
{
private:
	int Battery;

public:
	NotebookComp(const char * name, int initChag)
		:	Computer(name), Battery(initChag)
	{ 
		cout << "NotebookComp ������" << endl;
	}
	
	void Charing() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}

	int GetBatteryInfo() { return Battery; }
};

class TableNotebook : public NotebookComp		// ��Ʈ�� ��ǻ�͸� ��ӹ���(��ǻ�͵� ��� ����)
{
private:
	char regstPenModel[50];

public:
	TableNotebook(const char* name, int initChag, const char* pen)
		: NotebookComp(name, initChag)
	{
		cout << "TabletNotebook ������" << endl;
		strcpy(regstPenModel, pen);
	}

	void Write(const char* penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}

		if (strcmp(regstPenModel, penInfo) != 0)
		{
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}

		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattery();
	}
};

int main(void)
{
	NotebookComp nc("�����", 33);
	TableNotebook tn("Ȳ��ȯ", 26, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}
*/