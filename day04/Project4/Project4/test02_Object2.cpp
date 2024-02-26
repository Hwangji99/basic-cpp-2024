// date : 2024-02-26
// file : test02_Object2.cpp
// desc : FruitSaleSim1

/*
#include <iostream>

using namespace std;

class FruitSeller												// FruitSeller��� Ŭ���� ����
{
private:														// ��� ���� ����
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)				// ��� �Լ� ����		// ������(�� �ƴ�����)(���: ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�)
	{
		APPLE_PRICE = price;									// �Է� ���� ������ �ʱ�ȭ
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money)									// ��� �Լ� ����
	{
		int num = money / APPLE_PRICE;							// �Ǹ� ����
		numOfApples -= num;										// ���� ��� ����	// -=, += �� ���� ���Կ�����
		myMoney += money;										// �� ��
		return num;
	}

	void ShowSalesResult()										// ��� �Լ� ����
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};	// ;(�����ݷ�)�� �� �־���� �Ѵ�

class FruitBuyer												// FruitBuyer��� Ŭ���� ����
{
private:														
	int myMoney;												// ��� ���� ����
	int numOfApples;

public:							
	void InitMembers(int money)									// ��� �Լ� ����
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller &refseller, int money)			// ��� �Լ� ����	// �������� seller
	{
		numOfApples += refseller.SaleApples(money);				// �ٸ� ��ü�� �ִ� ���� �ҷ��� numOfApples�� ����ִ´�
		myMoney -= money;
	}

	void ShowBuyResult()										// ��� �Լ� ����
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;									// new�� �����Ƿ� ���ÿ� ����ȴ� �ڡڡڡ�
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;									// ���� �����Ϸ��� new�����ڰ� �ʿ��ϴ� �ڡڡڡ�
	buyer.InitMembers(5000);	
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}
*/