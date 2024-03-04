// date : 2024-03-04
// file : test02_EmplMana.cpp
// desc : p.331


#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
private:
	char name[100];

public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}

	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}
};

class PermanentWorker : public Employee
{
private:
	int salary;

public:
	PermanentWorker(const char * name, int money)
		: Employee(name), salary(money)
	{ }
	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;

public:
	EmployeeHandler() : empNum(0)
	{ }

	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllsalaryInfo() const
	{
	
		/*
		for (int i=0; i < empNum; i++)
			empList[i] -> ShowSalaryInfo();
		*/
	}


	void ShowTotalSalary() const
	{
		int sum = 0;

		/*
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		*/
		
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
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
	EmployeeHandler handler;

	// 직원 등록
	handler.AddEmployee(new PermanentWorker("Son", 1000));
	handler.AddEmployee(new PermanentWorker("Hwang", 1500));
	handler.AddEmployee(new PermanentWorker("Lee", 3000));

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllsalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}
