// date : 2024-02-26
// file : test15_ID.cpp
// desc : ���� �ʼ� �ڡڡڡڡڡڡڡڡڡ�

/*
#include <iostream>
#include <cstring>

using namespace std;

class StudentClass
{
private:
	const int ID;							// �й��� ���ȭ
	char name[20];					// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ� �ڡڡڡڡ�
	char major[40];
	int age;

public:
	// ���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ� - ���忭�� ù��° ���� �ּҰ� ����ȴ�
	// ��� �̴ϼȶ������� ��ü ������ �ʱ�ȭ���� �ʴ� ������� �ʱ�ȭ�� �� ����Ѵ�. ��, ��ü ������ ������� �̸� �ʱ�ȭ�� �Ǵ� ����鿡 �ʱ�ȭ 
	StudentClass(int aID, const char* pname, const char* pmajor, int aage) : ID(aID) {	// : ID(aID) <- ��� �̴ϼȶ������� ���� �ʱ�ȭ�� ��Ŵ
		// ID = aID;
		strcpy(name, pname);		// ���ڿ��� strcpy�� ����Ͽ� �����ؼ� ���� �ִ´� // _CR SECURE ���ñ� ������ �Ӽ� ��ó���� ���� ������ �ȴ�
		strcpy(major, pmajor);		// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�
		age = aage;
	}

	void display() {
		cout << "ID: " << ID << endl;
		cout << "Name: " << name << endl;
		cout << "Major: " << major << endl;
		cout << "Age: " << age << endl;
	}
};

int main()
{
	StudentClass s(201811023, "Ȳ��ȯ", "�װ�������Ű��а�", 26);	// ��ü�� �����ϸ� �����ڸ� ȣ���ؾ� �Ѵ�
	s.display();

	return 0;
}
*/