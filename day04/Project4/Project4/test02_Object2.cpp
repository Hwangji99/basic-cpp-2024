// date : 2024-02-26
// file : test02_Object2.cpp
// desc : FruitSaleSim1

/*
#include <iostream>

using namespace std;

class FruitSeller												// FruitSeller라는 클래스 선언
{
private:														// 멤버 변수 선언
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)				// 멤버 함수 선언		// 생성자(는 아니지만)(기능: 객체를 생성하고 초기화한다)
	{
		APPLE_PRICE = price;									// 입력 받은 값으로 초기화
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money)									// 멤버 함수 선언
	{
		int num = money / APPLE_PRICE;							// 판매 갯수
		numOfApples -= num;										// 남은 사과 갯수	// -=, += 은 복합 대입연산자
		myMoney += money;										// 번 돈
		return num;
	}

	void ShowSalesResult()										// 멤버 함수 선언
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};	// ;(세미콜론)을 꼭 넣어줘야 한다

class FruitBuyer												// FruitBuyer라는 클래스 선언
{
private:														
	int myMoney;												// 멤버 변수 선언
	int numOfApples;

public:							
	void InitMembers(int money)									// 멤버 함수 선언
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller &refseller, int money)			// 멤버 함수 선언	// 참조변수 seller
	{
		numOfApples += refseller.SaleApples(money);				// 다른 객체에 있는 값을 불러와 numOfApples에 집어넣는다
		myMoney -= money;
	}

	void ShowBuyResult()										// 멤버 함수 선언
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;									// new가 없으므로 스택에 저장된다 ★★★★
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;									// 힙에 저장하려면 new연산자가 필요하다 ★★★★
	buyer.InitMembers(5000);	
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}
*/