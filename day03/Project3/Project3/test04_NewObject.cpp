// date : 2024-02-23
// file : test04_NewObject.cpp
// desc : NewObject

// New�� ����ؼ� ��ü�� ������� Class�� ������ �̸��̾�� �Ѵ� ��
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

class Simple			
{
public:
	Simple()						// ������(Ŭ���� �̸��� ���� �޼���)
	{
		cout << "I'm simple constructor!" << endl;
	}

};

int main(void)
{
	cout << "case 1 : ";
	Simple* sp1 = new Simple;		// Ŭ������ �� �ϳ��� Ÿ���̶� ����Ʈ���� ����� ����� �� �ִ�
									// �������� New�� ����Ͽ� �����̶�� ��ü�� ���� -> ���ÿ� �ִ� ���� Ÿ�Կ� sp1�̶�� ������ ������ ����
	cout << "case 2 : ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple)*1);	// sizeof(Simple)*1 �� ���� �ϳ� ũ�⿡ �޸𸮸� �Ҵ��Ѵٴ� �ǹ�

	cout << endl << "end of main" << endl;
	delete sp1;						// ��ü�� ��ȯ�Ѵ� "I'm simple constructor!" ���� ��ȯ
	free(sp2);						// malloc�� ���� ���� ��ü, �⺻ �ڷ����� ������ Simpleó�� ���� ���� ���� �ȵȴ�
	return 0;
}
*/