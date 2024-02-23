// date : 2024-02-23
// file : test10_RacingCarClassBase.cpp
// desc :

/*
#include <iostream>
#include <cstring>

using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
	// �������, �ʵ�, �Ӽ� ������ �Ҹ���(�� ���� ��)
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
	// ����Լ�, �޼���, ��� ������ �Ҹ���(�� ���� ��)
public:
	void InitMenbers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMenbers(const char* ID, int fuel)					// �ʵ��� �ʱ�ȭ ��� �޼���
{
	strcpy(gamerID, ID);		// run99�� gamerID�� �����ض�	// ���޵� ID�� ���ڿ��� �����ؼ� gamerID�� ����
	fuelGauge = fuel;			// 100
	curSpeed = 0;
}
void Car::ShowCarState()
{
	cout << "������ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
	Car run99;							// class car Ÿ���� ��ü run99 ����
	run99.InitMenbers("run99", 100);	// run99 ��ü�� InitMembers() �޼��� ȣ���Ͽ� �ʵ带 �ʱ�ȭ
	run99.Accel();
	run99.Accel();
	run99.Accel();				
	run99.ShowCarState();
	run99.Break();				
	run99.ShowCarState();
	return 0;
}
*/