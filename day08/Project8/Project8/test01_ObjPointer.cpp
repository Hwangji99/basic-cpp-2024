// date : 2024-03-04
// file : test01_ObjPointer.cpp
// desc : p.327

/*
#include <iostream>

using namespace std;

class Person
{
public:
	void Sleep() {
		cout << "Sleep" << endl;
	}
};
class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void Study() { cout << "Work" << endl; }
};

int main(void)
{
*/
	// Student * ptr0 = new Student();			 ������ Ÿ������ ����ϴ� ���� ��Ģ�̴�
	/*
		�θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����ų �� �ִ�
		������ �ڽ�Ÿ���� ��ü �����ͷ� �θ� ��ü�� ����ų �� ����
		�׸��� ������ ��ü �������� Ÿ���� ������
	*//*
	Person* ptr1 = new Student();  
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent(); 
	ptr1->Sleep();	
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1;
	return 0;
}
*/

/*
  * ������
	�����ε�(Overloading) - ��������
	�������̵�(Overriding) - ������, ��Ӱ��迡�� ���
*/