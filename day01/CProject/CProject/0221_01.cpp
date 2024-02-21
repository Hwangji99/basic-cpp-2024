/*
  선택제어문 if문
*/
#include <iostream>

using namespace std;

int main()
{
	int inKey;	// C에서는 대소문자 구분함
	cout << "숫자하나를 입력하세요 > ";
	cin >> inKey;

	if (inKey == 6) {		// if(조건식) { .... 실행문 }
		cout << "빙고" << endl;
	}
	if (inKey > 6) {
		cout << "숫자가 큽니다." << endl;
	}
	if (inKey < 6) {
		cout << "숫자가 작습니다." << endl;
	}

	return 0;
}