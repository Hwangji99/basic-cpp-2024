// date : 2024-02-28
// file : test01_ShallCpyErr.cpp
// desc : ShallowCopyError (p.221)

/* ���� ����
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Person
{
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];			// �� ������ myname���� �޸� ������ �Ҵ�ް� ���ÿ� �ִ� Son heong min �̶�� �̸��� ����Ű�� �ּҸ� ����
		strcpy(name, myname);				
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[]name;					// �� ������ �Ҵ���� name�� ��ȯ�Ѵ�	// m2�� m1�� ����Ű�µ� m1�� �Ҹ��ϸ鼭 ������ �߻��Ѵ�
		cout << "called destructor!" << endl;									// ���� ������ ��������
	}
};

int main(void)
{
	Person man1("Son heong min", 33);		// ���ÿ� ����Ǿ� �ִ� Son heong min
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/
