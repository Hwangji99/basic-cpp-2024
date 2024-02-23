#pragma once
// date : 2024-02-23
// file : test13_RacingMain.cpp
// desc : FileDivi.h 헤더파일 : 선언

class Human {
	Human();
private:					// 생략해도 됨	// 없어도 다른 곳에선 사용할 수 없음						
	char name[20];	
	int age;
	char job[40];

public:						// 접근제어 지시자 (다 쓸 수 있음)
	void humanInfo();
};