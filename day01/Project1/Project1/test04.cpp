#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;
	std::cout << "�� ���� �����Է�: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "�� �� ������ ���� ��: " << result << std::endl;
	return 0;
}

/*
  ���
	1. �������
		if, switch
	2. �ݺ����
		for, while

	* for(�ʱ��; ���ǽ�; ������) {
		1. �ʱ���� ������ ������ ������.
		2. ���̸� for���� ���๮�� ����
		3. �������� ����
		4. ���ǽ��� ������ �ݺ��ϴ�
		5. �����̸� �ݺ����� ���
	
	* }
*/