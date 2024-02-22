// date : 2024-02-22
// file : test05_NameSp1.cpp
// desc : 이름공간

/*
#include <iostream>

using namespace std;

namespace BestComImpl		// BestComImpl 이라는 이름공간 만듦 
{
	void SimpleFunc(void)		// 그 이름공간 안에 SimpleFunc 이라는 함수 정의
	{
		cout << "BestCom이 정의한 함수" << endl;
	}
}

namespace ProgComImpl		// ProgComImpl 이라는 이름공간 만듦 
{
	void SimpleFunc(void)		// 그 이름공간 안에 SimpleFunc 이라는 함수 정의
	{
		cout << "ProgCom이 정의한 함수" << endl;
	}
}

int main(void)				// 메인 함수	
{
	BestComImpl::SimpleFunc();		// 각각의 이름공간의 함수들을 호출
	ProgComImpl::SimpleFunc();		// 호출하려면 이름공간을 붙여줘야한다
	return 0;
}

// std::endl 은 std라는 이름공간 안에 endl이라는 객체를 사용하겠다라는 의미
*/