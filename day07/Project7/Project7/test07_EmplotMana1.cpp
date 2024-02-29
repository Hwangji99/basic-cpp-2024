// date : 2024-02-29
// file : test07_EmployMana1.cpp
// desc : p. 273

/*
#include <iostream>
#include <cstring>

using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;

public:
	PermanentWorker(const char* name, int money)
		: salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	PermanentWorker* empList[50];			// ��ü������ �迭(PermanentWorker)
	int empNum;

public:
	EmployeeHandler() : empNum(0)
	{ }

	void AddEmployee(PermanentWorker* emp)		// PermanentWorker(������) ��ü�� �ּҸ� ����	// ������ ��ü�� �޾Ƽ� empList �迭�� ����ִ´�
	{
		empList[empNum++] = emp;				
	}

	void ShowAllSalaryInfo() const				
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();		// �迭�� 0���濡 �ּҰ� ����־ ���ο� �����ڸ� �����
	}											// empList �迭�� ��Ұ�(��ü �ּ�)�� ���ؼ� ����Լ��� ����

	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum: " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	// ���� ������ �������� ����� ��Ʈ�� Ŭ������ ��ü ����
	EmployeeHandler handler;

	// ���� ���
	handler.AddEmployee(new PermanentWorker("Son", 1000));
	handler.AddEmployee(new PermanentWorker("Hwang", 1500));
	handler.AddEmployee(new PermanentWorker("Kim", 2000));

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();
	return 0;
}
*/
