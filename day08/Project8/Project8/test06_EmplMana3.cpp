// date : 2024-03-04
// file : test06_EmplMana3.cpp
// desc : p.349

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

	virtual int GetPay() const
	{
		return 0;
	}

	virtual void ShowSalaryInfo() const
	{ }
};

class PermanentWorker : public Employee
{
private:
	int salary;

public:
	PermanentWorker(const char* name, int money)
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

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;

public:
	TemporaryWorker(const char* name, int pay)
		: Employee(name), workTime(0), payPerHour(pay)
	{ }

	void  AddworkTime(int Time)
	{
		workTime += Time;
	}

	int GetPay() const
	{
		return workTime * payPerHour;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;

public:
	SalesWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{ }

	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay() const
	{
		cout << "SalesWorker" << endl;		// 오버라이딩된 멤버 함수는 자식 것이 실행된다
		return PermanentWorker::GetPay()	// 따라서 재정의된 부모것을 호출하려면 PermanentWorker(부모)의 GetPay 함수 호출
			+ (int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;		// SalesWorker의 GetPay 함수가 호출됨
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];			// 객체 포인터 배열
	int empNum;

public:
	EmployeeHandler() : empNum(0)			// empList() - nullptr 초기화 == empList{}
	{ }

	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllsalaryInfo() const
	{

		
		for (int i=0; i < empNum; i++)
			empList[i] -> ShowSalaryInfo();
		
	}

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
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("SON", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("KIM", 700);
	alba->AddworkTime(5);			// 5시간 일한결과 등록
	handler.AddEmployee(alba);

	// 영업직 등록
	SalesWorker* seller = new SalesWorker("Hwang", 1000, 0.1);
	seller->AddSalesResult(7000);			// 영업실적 7000
	handler.AddEmployee(seller);

	// 이번 달에 지불해야 할 급여의 정보
	handler.ShowAllsalaryInfo();

	// 이번 달에 지불해야 할 급여의 총합	
	handler.ShowTotalSalary();
	return 0;
}