/*
  ������� if��
*/
#include <iostream>

using namespace std;

int main()
{
	int inKey;	// C������ ��ҹ��� ������
	cout << "�����ϳ��� �Է��ϼ��� > ";
	cin >> inKey;

	if (inKey == 6) {		// if(���ǽ�) { .... ���๮ }
		cout << "����" << endl;
	}
	if (inKey > 6) {
		cout << "���ڰ� Ů�ϴ�." << endl;
	}
	if (inKey < 6) {
		cout << "���ڰ� �۽��ϴ�." << endl;
	}

	return 0;
}