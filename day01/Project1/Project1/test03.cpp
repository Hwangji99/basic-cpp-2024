// date : 2024-02-21
// file : test03.cpp
// desc : 

/*
#include <iostream>

int main(void) {
	int val1;	// �޸� ����(RAM)�� int ũ��� �Ҵ��� �ް� val�̸����� ����Ѵ�
	std::cout << "ù ��° �����Է�: ";	// cout : ���ڿ��� ���
	std::cin >> val1;	// cin : val�� �����͸� �Է�

	int val2;
	std::cout << "�� ��° �����Է�: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "�������: " << result << std::endl;
	return 0;
}
*/

/*
  �������� = ���ú��� : ����Ǿ��� ���� �ȿ����� ����� ����
*/

/*
#include <iostream>

int global = 100;	// �������� ��𼭵� ��밡��

void func() {
	int a;		// �������� �� �߰�ȣ������ ��� ������ ����
	a = 100;
}

int main() {
	int a;
	int val;
	std::cout << "�����Է�: ";
	std::cin >> val;

	std::cout << "�Է��� ���ڴ� " << val << "�Դϴ�." << std::endl;
	a = 10;
	val = 100;
	return 0;
}
*/
