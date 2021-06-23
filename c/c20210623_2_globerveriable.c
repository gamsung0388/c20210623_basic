#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//전역변수:프로그램시작시 생성,프로그램이 종료시 소멸
//어디서든 사용가능
//자동초기화
//전역변수의 무분별한 선언은 신중,프로그램의 복잡도 증가
int g;
int r;//원의 반지름

void test() {
	//printf("a: %d\n", a);
	printf("a: %d\n", g);
	//사격형반지름
	r = 20;
	printf("%d\n", r * r);
}
int main() {
	//지역변수,전역변수
	//지역변수:함수가 시작될떄 생성, 함수가 종료 되면 소멸
	//선언된 {}안에서만 사용가능.
	int a = 10;
	printf("a: %d\n", a);

	return 0;
}