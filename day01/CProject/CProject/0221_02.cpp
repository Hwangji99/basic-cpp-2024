/*
  if else ��
*/

#include <iostream>

using namespace std;

int main() 
{
	int inKey;
	cout << "���� �Է� > ";
	cin >> inKey;

	if (inKey == 6) {		// if(���ǽ�) { .... ���๮ }
		cout << "����" << endl;
	}
	else if (inKey > 6) {		// C������ elif�� �ƴ� else if�� ����Ѵ�
		cout << "���ڰ� Ů�ϴ�." << endl;
	}
	else if (inKey < 6) {
		cout << "���ڰ� �۽��ϴ�." << endl;
	}
	else cout << "�߸��Է��ϼ̽��ϴ�." << endl;		// �ƹ��͵� �ƴ� �� else�� ���

	return 0;
}