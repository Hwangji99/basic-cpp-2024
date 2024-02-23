// date : 2024-02-23
// file : test08_RacingCarEnum.cpp
// desc :

/*
#include <iostream>

using namespace std;

namespace CAR_CONST				// CAR_CONST ��� �̸����� ����
{
	enum						// enum : ������
	{
		ID_LEN    = 20,
		MAX_SPD   = 200,
		FUEL_STEP = 2,
		ACC_STEP  = 10,
		BRK_STEP  = 10
	};
}

struct Car						// Car ��� ����ü ����
{
	char gamerID[CAR_CONST::ID_LEN];		// ��� ����	// char Ÿ���� �迭	// []�� ���� ������ ���ϴ� ID_LEN�� ���� 20�� �����´�
	int fuelGauge;							// ��� ����	// 100
	int curSpeed;							// ��� ����	// 0

	void ShowCarState()						// ��� �Լ�
	{
		cout << "������ID: " << gamerID << endl;						// ȣ��
		cout << "���ᷮ: " << fuelGauge << "%" << endl;					// ȣ��
		cout << "����ӵ�: " << curSpeed << "km/s" << endl <<endl;		// ȣ��
	}
	void Accel()							// ��� �Լ�
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
	void Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main(void)
{
	Car run99 = { "run99", 100, 0 };			// ����ü Ÿ���� Car�� run99��� ������ ����� {}������ �ʱ�ȭ
	run99.Accel();				//	98, 10				// run99 �ȿ� �ִ� Accel�̶�� �Լ��� ȣ���϶�
	run99.Accel();				//	96, 20
	run99.ShowCarState();
	run99.Break();				//	0
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();				//	98, 
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}
*/
/*
	New��� Ű���带 ����ϸ� heap ������ ������ �� �ִ� ������ �����Ѵ�
	delete []�� ��ȯ
*/