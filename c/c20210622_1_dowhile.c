#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	////do~while
	//int a = -1;
	//do {
	//	printf("%d\n", a); 
	//} while (a>0); //최소한번은 실행

	//사용자에게 입력을 받아서 y이면 '뮤직플레이'계속 출력

	//char answer='y';
	//while (answer == 'y') {
	//	printf("뮤직을 실행하시겠습니까?");
	//	scanf("%c", &answer);
	//	getchar(); //enter값 처리
	//	printf("뮤직~~~~플레이\n");
	//}

	//char answer = 'y';
	//do{
	//	printf("뮤직~~~~플레이\n");
	//	printf("뮤직을 계속 플레이할까요?");
	//	scanf("%c", &answer);
	//	getchar(); //enter값 처리
	//} while (answer == 'y');

	int s, sum = 0;
	do {
		printf("정수를 입력하세요");
		scanf("%d", &s);
		sum += s;

	} while (s != 0);
	printf("지금까지 더한수는 %d입니다", sum);

	return 0;
}