// date : 2024-02-23
// file : test13_RacingMain.cpp
// desc : FileDivi.h ������� : ����

#pragma once

#include <iostream>			// ��� ���� ������� ��

class Human {
private:					// �����ص� ��	// ��� �ٸ� ������ ����� �� ����						
	char name[20];	
	int age;
	char job[40];
	int born;

public:						// �������� ������ (�� �� �� ����)
	Human(const char* pname, int aage, const char* pjob, int aborn);		// ������
	void humanInfo();
};