// date : 2024-02-21
// file : test09_pmmd.cpp
// desc : ������

#include <iostream>

using namespace std;

int add(int a, int b)		// �Լ� add�� ����
{
	int result;
	result = a + b;			// result ���� a�� b�� ���� ����ִ´� 
	return result;			// result ���� ��ȯ�Ѵ�
}

int min(int a, int b)		// �Լ� minus�� ����
{
	int result;
	result = a - b;			// result ���� a�� b�� ���� ����ִ´�
	return result;			// result ���� ��ȯ�Ѵ�
}

int multi(int a, int b)	// �Լ� multiple�� ����
{
	int result;
	result = a * b;			// result ���� a�� b�� ���� ����ִ´�
	return result;			// result ���� ��ȯ�Ѵ�
}

float divi(int a, int b)	// �Լ� divide�� ����
{
	float result;
	result = a / b;			// result ���� a�� b�� �������� ����ִ´�
	return result;			// result ���� ��ȯ�Ѵ�
}

int main(void)
{
	char inKey;				// ���ں��� ����
	int num1, num2;

	while (true) {

		std::cout << "�����ڸ� �Է��Ͻÿ� > (���Ḧ ���� �� X�� �Է��Ͻÿ�.) ";
		std::cin >> inKey;

		if (inKey == 'X') {					// X�� ������ ���α׷� ����, �ƴϸ� +,-,*,/�� ������ ��� ���ư���
			std::cout << "����!" << std::endl;
			break;
		}

		std::cout << "�� ���� �Է��Ͻÿ� > ";
		std::cin >> num1 >> num2;

		if (inKey == '+') {
			std::cout << "\n��� : " << add(num1, num2) << std::endl;
		}

		else if (inKey == '-') {
			std::cout << "\n��� : " << min(num1, num2) << std::endl;
		}

		else if (inKey == '*') {
			std::cout << "\n��� : " << multi(num1, num2) << std::endl;
		}

		else if (inKey == '/') {
			std::cout << "\n��� : " << divi(num1, num2) << std::endl;
		}
	}

	return 0;
}