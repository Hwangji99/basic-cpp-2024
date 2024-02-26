// date : 2024-02-23
// file : test13_RacingMain.cpp
// desc : FileDivi.h 헤더파일 : 선언

#pragma once

#include <iostream>			// 헤더 선언 잘해줘야 함

class Human {
private:					// 생략해도 됨	// 없어도 다른 곳에선 사용할 수 없음						
	char name[20];	
	int age;
	char job[40];
	int born;

public:						// 접근제어 지시자 (다 쓸 수 있음)
	Human(const char* pname, int aage, const char* pjob, int aborn);		// 생성자
	void humanInfo();
};