#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//다차원배열
	/*int arr[2][3];*/
	/*arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	*/

	/*int a = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			a++;
			arr[i][i] = 3*i+j+1;
			printf("%d\n", arr[i][j]);

		}
	}*/
	//1번 국영수 " 00 00 00.

	//1번 합계 총점 평균

	//int score[2][3];
	//int sum=0,avg=0;
	//
	//for (int i = 0; i < 2; i++) {
	//	printf("(%d)국어,영어,수학 점수는?",i+1);
	//	for (int j = 0; j < 3; i++) {
	//		scanf("%d", &score[i][j]);
	//	
	//	}
	//}
	//printf("----------------------------------");
	////합계,평균 출력
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; i++) {
	//		sum += score[i][j];
	//	}
	//	//합계,평균
	//	printf("[%d]합계:%d 평균:%.2f\n", i+1, sum, (double)sum / 3);
	//	sum= 0;
	//	
	//}
	 
	//피보나치의 수열 구하기
	//0 1 1 2 3 5 8 13....

	int fibo[20];
	fibo[0] = 0; fibo[1] = 1;
	//0+1  1+1=2 1+2=3 2+3=5 3+5=8  
	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}
	for (int i = 0; i < 20; i++)
		printf("%d\n", fibo[i]);

	return 0;
}