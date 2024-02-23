// date : 2024-02-23
// file : test08_RacingCarEnum.cpp
// desc :

/*
#include <iostream>

using namespace std;

namespace CAR_CONST				// CAR_CONST 라는 이름공간 생성
{
	enum						// enum : 열거형
	{
		ID_LEN    = 20,
		MAX_SPD   = 200,
		FUEL_STEP = 2,
		ACC_STEP  = 10,
		BRK_STEP  = 10
	};
}

struct Car						// Car 라는 구조체 생성
{
	char gamerID[CAR_CONST::ID_LEN];		// 멤버 변수	// char 타입의 배열	// []은 방의 개수를 말하니 ID_LEN의 값인 20를 가져온다
	int fuelGauge;							// 멤버 변수	// 100
	int curSpeed;							// 멤버 변수	// 0

	void ShowCarState()						// 멤버 함수
	{
		cout << "소유자ID: " << gamerID << endl;						// 호출
		cout << "연료량: " << fuelGauge << "%" << endl;					// 호출
		cout << "현재속도: " << curSpeed << "km/s" << endl <<endl;		// 호출
	}
	void Accel()							// 멤버 함수
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
	Car run99 = { "run99", 100, 0 };			// 구조체 타입의 Car에 run99라는 변수를 만들어 {}값으로 초기화
	run99.Accel();				//	98, 10				// run99 안에 있는 Accel이라는 함수를 호출하라
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
	New라는 키워드를 사용하면 heap 영역에 저장할 수 있는 공간을 생성한다
	delete []로 반환
*/