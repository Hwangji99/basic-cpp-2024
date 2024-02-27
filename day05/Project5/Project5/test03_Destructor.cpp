// date : 2024-02-27
// file : test03_Destructor.cpp
// desc : p.188

/*
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;
	
public:
	Person(const char* myname, int myage)		// �Է� 2���� ���� ������
	{
		int len = strlen(myname) + 1;			// strlen()�� ���ڿ��� ���̸� ���ϴ� �Լ�	// +1�� �ϴ� ������ ���ڵڿ� Null�ڸ��� ����ֱ� ����
		name = new char[len];					// ���ڿ��� ���ڸ� �����ϴ� ���			// ���ڿ��̶�� ǥ�ø� �ϱ� ���� (C������ �̷�)
		strcpy(name, myname);					
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	
	~Person()									// �Ҹ���	// �ڵ����� �����Ϸ��� ȣ������ش� (�����ڵ� ��������)
	{
		delete[]name;							// ��ü�� �ڵ����� �Ҹ�ǰ� �Ѵ�
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee chan gyu", 26);
	Person man2("Hwang ji hwan", 26);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/