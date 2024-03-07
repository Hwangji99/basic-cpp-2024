// date : 2024-03-07
// file : test04_String01.cpp
// desc :

/*
	C-Stlye 문자열
	문자열은 마지막에 널문자가 붙는다
*/
/*
#include <iostream>

using namespace std;

int main()
{
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;			// 아스키코드 a = 97이라 a가 출력됨
	cout << "=========================" << endl;
	char ary[6] = { 'a', 'b', 'c', 'd', 'e' };		// 문자열 타입의 배열 선언
	cout << ary << endl;
	cout << "=========================" << endl;
	char ary1[] = { 'a', 'b', 'c', '\0', 'e' };		// 널문다 - 문자열의 끝을 알린다
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;		// 전체 문자 크기
	cout << strlen(ary1) << endl;		// 널문자 앞까지의 크기
	cout << "=========================" << endl;
	char str[] = "string";				// 자동으로 널문자가 붙는다
	cout << str << endl;
	cout << sizeof(str) << endl;		// 널문자가 포함된 크기가 리턴된다
	cout << strlen(str) << endl;
	str[0] = 'S';
	cout << str << endl;
	cout << "=========================" << endl;
	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(str) << endl;		
	cout << strlen(str) << endl;
	//pstr[0] = 's';					// 문자열을 포인터로 사용하는 경우는 변경불가
	*/
	/*
C++ - style : 힙영역에 저장한다
*//*
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;      // 40
	// cout << strlen(s) << endl;   
	cout << s.size() << endl;      // 6

	string s1 = "LeeEunsu";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;
	cout << s1.size() << endl;

	return 0;
}
*/