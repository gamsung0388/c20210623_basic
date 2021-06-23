#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrayPrint(int argc, char* argv[]) { //char **argv도 됨.
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}

int main() { //아규먼트
	//이차 문자열 배열의 매개변수

	//char str[][7] = { "python","c","java" };
	////포인터의 배열함수로 넘기기
	/*char* p[3] = { "python","c","java" };*/
	//printf("%p %p %p\n", p[0], p[1], p[2]); //d = 10진수 p = 16진수


	//다차원 배열의 포인터
	//char arr[][7] = { "python","c","java" };
	//char(*p)[7] = arr;
	//printf("%p %p %p\n", p[, p+1, p+2); 

	char* p[3] = { "python","c","java" };
	printf("%p %p %p\n", p[0], p[1], p[2]);

	//함수로 처리
	//for (int i = 0; i < 3; i++) {
	//	printf("%s\n",p[i]);
	//}
	arrayPrint(3, p);

	return 0;
}