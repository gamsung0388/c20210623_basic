#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////전역변수
//int sum = 0;
//매개변수로 정수를 입력받아 누적하는 함수
int UserSum(int a) {
	//static 변수(static 메모리구조)
	// stack (메모리 구조:FILO구조)
	//전역변수처럼
	//함수가최초로 실행됬을때 생성 프로그램 종료시 소멸.
	//선언된 함수안에서만 접근가능
	static int sum = 0;
	sum = sum + a;
	return sum;
}

//매개변수: 없다
//리턴값 : 이함수를 실행한 횟수
//함수의 이름 :countTest

int countTest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}

int main() {
	//전역변수,지역변수 사용예
	//printf("누적:%d\n",UserSum(10));
	//printf("누적:%d\n", UserSum(20));
	//sum = 100; static 변수 접근불가

	//반복문을 이용해서 함수를 10번 실행
	//실행횟수: 1
	//실행횟수 10

	for (int i = 0; i < 10; i++) {
		printf("실행횟수: %d\n", countTest());
	}

}