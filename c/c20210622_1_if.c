#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ǽ��� ���� �� ������ ����/ �����϶� ������ ������ ����

	/*int a = 0;
	if (a > 0) {
		printf("���\n");
	}else{	
		if (a < 0) {
			printf("����\n");
		}else{
			printf("����� ������ �ƴ� ��");
		}
	}*/

	/*int a = 0;
	if (a > 0)
		printf("���\n");
	else if (a < 0)
		printf("����\n");
	else
		printf("����� ������ �ƴ� ��");
	*/


	//�ǽ� ����: �������� �Է¹޾� ū���� ���(�μ��� �������� �ִ�.

	//int a, b;
	//printf("�������� �Է��Ͻÿ�");
	//scanf("%d%d",&a,&b);
	//if (a > b)
	//	printf("%d\n",a);
	//else if (a < b)
	//	printf("%d\n",b);
	//else
	//	printf("�μ��� ����.");

	//�ǽ� ����:������ 90�̻� a~60�̸� f

	/*int a;
	printf("������ �Է��ϼ���");
	scanf("%d",&a);

	if (a > 100 || a < 0)
		printf("�߸�������");
	else if (a >= 90)
		printf("A����");
	else if (a >= 80)
		printf("B����");
	else if (a >= 70)
		printf("C����");
	else if (a >= 60)
		printf("D����");
	else
		printf("F����");*/


	//�ǽ�)����üũ=>�հ����
	/*int kor, eng, math;
	printf("������ ������ �Է��ϼ���");
	scanf("%d%d%d", &kor, &eng, &math);
	int sum = kor + eng + math;
	double avg = (kor + eng + math) / 3;
	if (kor < 60 || eng < 60 || math < 60)
		printf("����");
	else
		printf("������ %d, ����� %.2f",sum, avg);*/

	//�ǽ� ����: ���� �Է�
	/*int year;
	printf("������ �Է��ϼ���");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
		printf("����");
	else
		printf("����ƴϴ�");*/


	//�ǽ�: �޴� ����
	int no;
	printf("1.�����\n 2.«��\n 3.������\n 4.�����\n 5.����\n 6.���İ�Ƽ\n");
	printf("�޴���?");
	scanf("%d", &no);
	if (no == 1 || no == 2) {
		printf("�߽��ڳ�\n");
	}else if (no == 3 || no == 4) {
		printf("�ѽ��ڳ�\n");
	}else if (no == 5 || no == 6) {
		printf("����ڳ�\n");
	}else {
		printf("�߸��ȸ޴�\n");
	}
	return 0;

}