#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include <stdio.h>

int main() {
	//선택조건문:swich~case
	/*int a = 1;
	switch (a) {
		case0:
			printf("zero\n");
		case1:
			printf("one\n");
		case2:
			printf("two\n"); break;
		default:
			printf("잘못된숙자\n");*/

	//월의 마지막날 출력
	/*int mon = 2;		
	switch(mon){
		case 1:			
		case 3:
		case 5:
		case 7:	
		case 8:
		case 10:
		case 12:
			printf("31"); break;
		case 2:
			printf("28"); break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30"); break;
		default:
			printf("잘못된 월입니다."); break;
		}*/
	
	//메뉴선정
	int no;
	printf("1.자장면\n 2.짬뽕\n 3.설렁탕\n 4.비빔밥\n 5.피자\n 6.스파게티\n");
	printf("메뉴는?");
	scanf("%d", &no);
	printf("1.자장면\n 2.짬뽕\n 3.설렁탕\n 4.비빔밥\n 5.피자\n 6.스파게티\n");
	switch (no) {
	case 1:
	case 2:
		printf("중식코너"); break;
	case 3:
	case 4:
		printf("한식코너"); break;
	case 5:
	case 6:
		printf("양식코너"); break;

	default:
		printf("없는 메뉴입니다."); break;
	}

	return 0;
}