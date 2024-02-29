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
	PermanentWorker* empList[50];			// 객체포인터 배열(PermanentWorker)
	int empNum;

public:
	EmployeeHandler() : empNum(0)
	{ }

	void AddEmployee(PermanentWorker* emp)		// PermanentWorker(정규직) 객체의 주소를 받음	// 정규직 객체를 받아서 empList 배열에 집어넣는다
	{
		empList[empNum++] = emp;				
	}

	void ShowAllSalaryInfo() const				
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();		// 배열의 0번방에 주소가 들어있어서 에로우 연산자를 사용함
	}											// empList 배열의 요소값(객체 주소)을 통해서 멤버함수에 접근

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
	// 직원 관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
	EmployeeHandler handler;

	// 직원 등록
	handler.AddEmployee(new PermanentWorker("Son", 1000));
	handler.AddEmployee(new PermanentWorker("Hwang", 1500));
	handler.AddEmployee(new PermanentWorker("Kim", 2000));

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllSalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합
	handler.ShowTotalSalary();
	return 0;
}
*/
