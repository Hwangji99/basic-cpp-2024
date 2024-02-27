/*
	복사생성자 : 객체를 복사할 때 호출되는 생성자
	따라서 복사할 객체를 입력으로 가져야하는데 이때 원본 객체의 참조를 입력으로 받아야 한다(외워라★★★★★)
*/

/*
// date : 2024-02-27
// file : test11_CpyConst2.cpp
// desc :

#include <iostream>

using namespace std;

class A {
public:
	A() {
		cout << "디폴트 생성자 호출" << endl;
	}
	A(int a) {
		cout << "A(int a) 생성자 호출" << endl;
	}
	A(const A& r) {											// & 참조연산자를 넣지 않으면 무한히 객체가 생성된다
		cout << "A(const &A r) 생성자 호출" << endl;		// 복사되는 값이 변하지 않아야하므로 const를 붙인다 // 이게 좋은 코드임 ㅎㅎ
	}
};


int main()
{
	A obj1;			// 디폴트 생성자로 객체 생성
	A obj2(10);		// 2번째 입력 하나를 가지는 생성자 호출
	A obj3(obj2);	// 3번째 복사 생성자 호출
	return 0;
}
*/