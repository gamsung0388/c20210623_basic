#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//반복문 : for
	//int i;//반복할 변수
	//			   8     10	
	//			   5     7
	//      1      2     4

	//for (i = 0; i < 10; i+=2) {
	//	printf("%d\n", i); //3,6,9
	//}
	//실습)구구단

	//int dan;
	//do {
	//	printf("단수는?");
	//	scanf("%d", &dan);
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//} while (dan!=0);

	//int dan;
	//while(1) {
	//	printf("단수는?");
	//	scanf("%d", &dan);
	//	if (dan == 0)break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}

	//이중 for,
	/*for (int i = 2; i < 10; i++) {
		printf("[%d]단\n",i);
		for (int j = 1; j < 10; j++)
			printf("%d * %d = %d\n",i,j,i*j );
	}*/

	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d", i, j, k);

	//1부터 100까지의 합
	/*int sum = 0;
	for (int i = 1; i < 101; i++)
		sum += i;
	printf("합은 %d\n", sum);*/

	//1부터 입력 받은 수까지의 합
	/*int sum = 0, a = 0;
	printf("입력하세요:");
	scanf("%d",&a);
	for (int i = 1; i < a+1; i++)//i는 for의 지역변수
		sum += i;
	printf("1부터 %d까지의 합은 %d입니다.",a,sum);*/ //i변수는 사용불가

	//큰수에서 작은수 빼기
	//int a, b;
	//for (int i = 1; i < 10; i++) {
		//두수를 입력받기
	//	printf("두수를 입력하세요 ");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	// 	   //큰수에서 작은 수 빼고 출력
	//	if (a > b) {
	//		printf("두 정수의 차는 %d\n", a - b);
	//	}
	//	else 
	//		printf("두정수의 차는 %d\n", b - a);
	//	printf("0을 입력하면 종료됩니다.");
	// 	int c = getch(); //에코없는 함수
	// 	if (c==48) break; //0을 입력하면 종료

	//}
	//별찍기
	//for (int i = 1; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


//	별찍기2
	//for (int i = 1; i < 7; i++) {
	//	for (int j = 0; j < 7-i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	////별찍기3
	//for (int i = 0; i < 7; i++) {
	//	//공백출력
	//	for (int j = 0;j<7-i;j++) {
	//		printf(" ");

	//	}
	//	//별출력
	//	for (int k = 0;k<i+1;k++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	}

	//별찍기 4
	//for (int i = 0; i < 7; i++) {
	//	//공백출력
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	//별출력
	//	for (int k = 0; k < (i*2)+1; k++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	/*int a= 0, b= 0, sum=0;
	printf("시작 정수,마지막 정수? ");
	scanf("%d%d", &a, &b);
	while(a<=b){
		sum += a;
		printf("%d %d\n",a,sum);
		++a;
		printf("%d %d\n", a, sum);
	}

	printf("합계는%d",sum);*/

	//int n= 0,result= 1;
	//printf("정수를 입력하세요");
	//scanf("%d", &n);

	//for (int i=1;i<=n;i++)
	//{
	//	result*=i;
	//}
	//
	//printf("1부터 %d까지 곱한 값은 %d", n, result);

	//1부터 1씩 증가하는 수를 더해서 합이 1000이상되는 정수와 그합
	/*int a = ;
	while (1) {
		a+=1
	}*/

	//1+2+3+4+5+6+...=1000
	/*	printf("i");*/

	//1부터 10까지의 정수에서 두수를 골라 두수합이 10이 되는 두수 구하기
	//i+g=10;
	//이중for
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; i++) {
			if (i + j == 10) {
				printf("%d, %d", i, j);
			}
		}
	}

	/*	char no;
		scanf("%c", &no);
		if (no == '1') {
			printf("ok");
		}*/

		/*char a = 0;
		do {
			printf("1.자장면\n 2.짬뽕\n 3.설렁탕\n 4.비빔밥\n 5.피자\n 6.스파게티\,q:종료\n음식번호:");
			printf("메뉴는?");
			scanf("%c", &a);
			switch (a) {
			case '1':
			case '2':
				printf("중식코너"); break;
			case '3':
			case '4':
				printf("한식코너"); break;
			case '5':
			case '6':
				printf("양식코너"); break;

			default:
				printf("없는 메뉴입니다."); break;
			}
		} while (a != 'q');*/

	return 0;
}