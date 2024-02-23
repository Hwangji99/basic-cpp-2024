#include <iostream>
#include "test15_FileDivi.h"

void Human::humanInfo()
{
	std::cout << "나는 " << age << "살인" << ' ' << job << ' ' << name << " 입니다." << std::endl;
}

int main()
{
	Human h("황지환", 26, "로또 연속 2번 당첨될 사람");
	h.humanInfo();
	return 0;
}