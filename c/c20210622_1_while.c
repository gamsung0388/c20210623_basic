#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include <stdio.h>

int main() {


	////�ݺ���:while
	/*while (1) {
		printf("c!!");
	}*/
	//break �ݺ��� Ż��
	//int cnt = 0;
	//while (1) { //1:true 0:false
	//	printf("%d. c!!!\n",cnt+1);
	//	cnt++;//cnt +=1 //cnt = cnt +1;
	//	if (cnt > 9)break;
	//}

	//�ǽ�)1~10������ ��
	//int i= 0, sum=0;
	//while (i<10) {
	///*	printf("%d\n", ++i);
	//	i++;*/
	//	sum += ++i; /*sum = sum + i;*/
	//}
	//printf("�հ�:%d\n",sum);

	//���� 2000�� �Ѵ� ������ ������ ���϶�.
	//1+2+3+4....+n
	//1,3,6
	//int a = 0, sum = 0;
	//while (sum < 2000) {
	//	a++;
	//	sum += a;//sum= sum+a+1
	//
	//}
	//printf("n:%d �հ�: %d\n",a, sum);

	/*int n = 0;
	while (n<20){
		n++;
		if (n%3==0)
			printf("%d\n",n);

	}*/
	/*int a = 3;
	while (a < 20)
	{
		printf("%d", a);
		a += 3;

	}*/
	/*int a = 0;
	while (1) {
		a += 3;
		if (a > 20)break;
		printf("%d", a);

	}*/

	//continue:���
	/*int a = 0;
	while (a<10){
		a++;
		if (a % 2 != 0) continue;
			printf("%d\n", a);

	}*/

	return 0;
}