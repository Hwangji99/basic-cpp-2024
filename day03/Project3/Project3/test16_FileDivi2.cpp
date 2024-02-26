#include <iostream>
#include <cstring>
#include "test15_FileDivi.h"

Human::Human(const char* pname, int aage, const char* pjob, int aborn)
{
	strcpy(name, pname);
	age = aage;
	strcpy(job, pjob);
	born = aborn;
}
void Human::humanInfo()
{
	std::cout << "저는 " << age << "살인" << ' ' << job << ' ' << name << " 입니다." << born << std::endl;
}

int main()
{
	Human h("황지환", 26, "로또 연속 2번 당첨될 사람",990214);
	h.humanInfo();
	return 0;
}