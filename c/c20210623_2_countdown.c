#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//매개변수:카운트다운 초
//반환값:없음.
//기능:카운트다운을 출력

int countdown(int s) {

	for (int i = s; i > -1; i--) {
		Sleep(1000); //1/1000초 단위
		printf("%d초\n", i);
	}
}

int main() {
	//카운트 다운
	//5초...발사
	printf("카운트다운 시작\n");
	countdown(5);
	printf("발사");

	return 0;
}ss