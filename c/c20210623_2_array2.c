#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������迭
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
	//1�� ������ " 00 00 00.

	//1�� �հ� ���� ���

	//int score[2][3];
	//int sum=0,avg=0;
	//
	//for (int i = 0; i < 2; i++) {
	//	printf("(%d)����,����,���� ������?",i+1);
	//	for (int j = 0; j < 3; i++) {
	//		scanf("%d", &score[i][j]);
	//	
	//	}
	//}
	//printf("----------------------------------");
	////�հ�,��� ���
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; i++) {
	//		sum += score[i][j];
	//	}
	//	//�հ�,���
	//	printf("[%d]�հ�:%d ���:%.2f\n", i+1, sum, (double)sum / 3);
	//	sum= 0;
	//	
	//}
	 
	//�Ǻ���ġ�� ���� ���ϱ�
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