/*
  선택제어문 : switch
*/

#include <iostream>

using namespace std;

int main()
{
	int inKey;
	cout << "숫자입력 > ";
	cin >> inKey;

	switch (inKey) {
	case 1:
		cout << "1입니다." << endl;
		break;	// break가 없으면 해당 case를 포함 밑에 다른 case까지 출력된다.
	case 2:
		cout << "2입니다." << endl;
		break;
	case 3:
		cout << "3입니다." << endl;
		break;
	default:
		cout << "이것도 저것도 아닙니다." << endl;
		break;
	}


	return 0;
}