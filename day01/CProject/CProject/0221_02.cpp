/*
  if else 문
*/

#include <iostream>

using namespace std;

int main() 
{
	int inKey;
	cout << "정수 입력 > ";
	cin >> inKey;

	if (inKey == 6) {		// if(조건식) { .... 실행문 }
		cout << "빙고" << endl;
	}
	else if (inKey > 6) {		// C에서는 elif가 아닌 else if를 사용한다
		cout << "숫자가 큽니다." << endl;
	}
	else if (inKey < 6) {
		cout << "숫자가 작습니다." << endl;
	}
	else cout << "잘못입력하셨습니다." << endl;		// 아무것도 아닐 때 else를 사용

	return 0;
}