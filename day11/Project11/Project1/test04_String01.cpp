// date : 2024-03-07
// file : test04_String01.cpp
// desc :

/*
	C-Stlye ���ڿ�
	���ڿ��� �������� �ι��ڰ� �ٴ´�
*/
/*
#include <iostream>

using namespace std;

int main()
{
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;			// �ƽ�Ű�ڵ� a = 97�̶� a�� ��µ�
	cout << "=========================" << endl;
	char ary[6] = { 'a', 'b', 'c', 'd', 'e' };		// ���ڿ� Ÿ���� �迭 ����
	cout << ary << endl;
	cout << "=========================" << endl;
	char ary1[] = { 'a', 'b', 'c', '\0', 'e' };		// �ι��� - ���ڿ��� ���� �˸���
	cout << ary1 << endl;
	cout << sizeof(ary1) << endl;		// ��ü ���� ũ��
	cout << strlen(ary1) << endl;		// �ι��� �ձ����� ũ��
	cout << "=========================" << endl;
	char str[] = "string";				// �ڵ����� �ι��ڰ� �ٴ´�
	cout << str << endl;
	cout << sizeof(str) << endl;		// �ι��ڰ� ���Ե� ũ�Ⱑ ���ϵȴ�
	cout << strlen(str) << endl;
	str[0] = 'S';
	cout << str << endl;
	cout << "=========================" << endl;
	const char* pstr = "STRING";
	cout << pstr << endl;
	cout << sizeof(str) << endl;		
	cout << strlen(str) << endl;
	//pstr[0] = 's';					// ���ڿ��� �����ͷ� ����ϴ� ���� ����Ұ�
	*/
	/*
C++ - style : �������� �����Ѵ�
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