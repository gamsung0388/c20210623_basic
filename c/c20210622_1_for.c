#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//�ݺ��� : for
	//int i;//�ݺ��� ����
	//			   8     10	
	//			   5     7
	//      1      2     4

	//for (i = 0; i < 10; i+=2) {
	//	printf("%d\n", i); //3,6,9
	//}
	//�ǽ�)������

	//int dan;
	//do {
	//	printf("�ܼ���?");
	//	scanf("%d", &dan);
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//} while (dan!=0);

	//int dan;
	//while(1) {
	//	printf("�ܼ���?");
	//	scanf("%d", &dan);
	//	if (dan == 0)break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}

	//���� for,
	/*for (int i = 2; i < 10; i++) {
		printf("[%d]��\n",i);
		for (int j = 1; j < 10; j++)
			printf("%d * %d = %d\n",i,j,i*j );
	}*/

	//for (int i = 0; i < 10; i++)
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d", i, j, k);

	//1���� 100������ ��
	/*int sum = 0;
	for (int i = 1; i < 101; i++)
		sum += i;
	printf("���� %d\n", sum);*/

	//1���� �Է� ���� �������� ��
	/*int sum = 0, a = 0;
	printf("�Է��ϼ���:");
	scanf("%d",&a);
	for (int i = 1; i < a+1; i++)//i�� for�� ��������
		sum += i;
	printf("1���� %d������ ���� %d�Դϴ�.",a,sum);*/ //i������ ���Ұ�

	//ū������ ������ ����
	//int a, b;
	//for (int i = 1; i < 10; i++) {
		//�μ��� �Է¹ޱ�
	//	printf("�μ��� �Է��ϼ��� ");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	// 	   //ū������ ���� �� ���� ���
	//	if (a > b) {
	//		printf("�� ������ ���� %d\n", a - b);
	//	}
	//	else 
	//		printf("�������� ���� %d\n", b - a);
	//	printf("0�� �Է��ϸ� ����˴ϴ�.");
	// 	int c = getch(); //���ھ��� �Լ�
	// 	if (c==48) break; //0�� �Է��ϸ� ����

	//}
	//�����
	//for (int i = 1; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


//	�����2
	//for (int i = 1; i < 7; i++) {
	//	for (int j = 0; j < 7-i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	////�����3
	//for (int i = 0; i < 7; i++) {
	//	//�������
	//	for (int j = 0;j<7-i;j++) {
	//		printf(" ");

	//	}
	//	//�����
	//	for (int k = 0;k<i+1;k++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//	}

	//����� 4
	//for (int i = 0; i < 7; i++) {
	//	//�������
	//	for (int j = 0; j < 7 - i; j++) {
	//		printf(" ");
	//	}
	//	//�����
	//	for (int k = 0; k < (i*2)+1; k++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	/*int a= 0, b= 0, sum=0;
	printf("���� ����,������ ����? ");
	scanf("%d%d", &a, &b);
	while(a<=b){
		sum += a;
		printf("%d %d\n",a,sum);
		++a;
		printf("%d %d\n", a, sum);
	}

	printf("�հ��%d",sum);*/

	//int n= 0,result= 1;
	//printf("������ �Է��ϼ���");
	//scanf("%d", &n);

	//for (int i=1;i<=n;i++)
	//{
	//	result*=i;
	//}
	//
	//printf("1���� %d���� ���� ���� %d", n, result);

	//1���� 1�� �����ϴ� ���� ���ؼ� ���� 1000�̻�Ǵ� ������ ����
	/*int a = ;
	while (1) {
		a+=1
	}*/

	//1+2+3+4+5+6+...=1000
	/*	printf("i");*/

	//1���� 10������ �������� �μ��� ��� �μ����� 10�� �Ǵ� �μ� ���ϱ�
	//i+g=10;
	//����for
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
			printf("1.�����\n 2.«��\n 3.������\n 4.�����\n 5.����\n 6.���İ�Ƽ\,q:����\n���Ĺ�ȣ:");
			printf("�޴���?");
			scanf("%c", &a);
			switch (a) {
			case '1':
			case '2':
				printf("�߽��ڳ�"); break;
			case '3':
			case '4':
				printf("�ѽ��ڳ�"); break;
			case '5':
			case '6':
				printf("����ڳ�"); break;

			default:
				printf("���� �޴��Դϴ�."); break;
			}
		} while (a != 'q');*/

	return 0;
}