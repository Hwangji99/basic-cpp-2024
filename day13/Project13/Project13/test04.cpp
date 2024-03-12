// date : 2024-03-12
// file : test04.cpp
// desc : while문과 if문만으로 배열 순서를 바꾸어 저장 출력하시오.

/*
// 이거슨 역순
#include <iostream>

using namespace std;

int main() {
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    char reversed_ary[6]; // 새로운 배열을 저장할 공간 생성

    int i = 0;
    int j = 5; // 배열의 끝에서부터 역순으로 접근할 인덱스

    while (i < 6) {
        if (j >= 0) {
            reversed_ary[i] = ary[j]; // 역순으로 배열에 저장
            i++;
            j--;
        }
        else {
            break;
        }
    }

    printf("Reversed array: ");
    for (int k = 0; k < 6; k++) {
        printf("%c ", reversed_ary[k]); // 배열 출력
    }
    printf("\n");

    return 0;
}
*/