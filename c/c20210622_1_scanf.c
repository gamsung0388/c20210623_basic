#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include <stdio.h>

int main() {  //void main or main(void) == return�Ǵ°� ����.
	//�Է��Լ�
	/*int a;*/

	//printf("������?");
	//scanf("%d",&a); //&a = a�� �ּ�
	//printf("�Է��� �� : %d\n %p\n",a, &a);
	//%p �ּҸ� �ҷ����� ��//16����, 0~9, A~F
	
	//�Ǽ��� �Է¹ޱ�
	//float f;
	//double d;
	//printf("�Ǽ���?");
	//scanf("%f",&f);
	
	//printf("double �Ǽ���?");
	//scanf("%lf", &d); //���˹��ڿ� double�� ���: %lf 
	//
	//printf("�Է��� ��: %f %p\n %f %p\n", f,&f,d,&d);

	//������ �Է¹ޱ�
	/*char c;
	printf("���ڴ�?");
	scanf("%c", &c);
	printf("�Է��� ���� %c\n",c);*/

	//�ǽ� �������� �Է¹޾Ƽ� �հ踦���
	/*int a, b;
	printf("�������� �Է��ϼ���");
	scanf("%d%d",&a,&b);
	printf("���� ����: %d", a + b);*/

	//�ǽ� ������ ��¥(��/��/��)�� �Է¹޾� ���
	/*int year, month, day;
	printf("�⵵�� �Է��Ͻÿ�");
	scanf("%d%d%d",&year,&month,&day);
	printf("%d�� %d�� %d��\n", year, month, day);*/

	/*int a, b;
	printf("�������� �Է��ϼ���");
	scanf("%d%d",&a,&b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %f\n", a, b, (float)a / b);*/

	//���� ó���ϱ����� ����
	//int a, b;
	//char sign;
	//printf("ù��°��?"); //10 + 20;
	//scanf("%d", &a);
	//printf("�ι�°��?");
	//scanf("%d", &b);
	//
	////�ѹ��ڸ� �о ��ȯ�ϴ� �Լ�
	//getchar(); //���͸� ó���ϱ����� �������� ��

	//printf("����°��?");
	//scanf("%c", &sign);

	//	
	//printf("%d %c %d\n", a, sign, b);

	//int amount, pay;//���ǰ�, ������ ��
	//printf("���ǰ���?");
	//scanf("%d", &amount);
	//printf("������ ��?");
	//scanf("%d", &pay);

	//pay > amount ? 
	//	printf("�Ž������� %d ��",pay-amount) :
	//	amount > pay ? printf("%d���� �����մϴ�.",amount-pay):
	//	printf("����Ϸ�\n");
	// 

	//int kor, eng, math;
	//printf("������?");
	//scanf("%d%d%d", &kor, &eng, &math);
	//int sum = kor + eng + math;
	//printf("�հ�� %d\n", sum);
	//printf("����� %.2f", sum/3.); //. or doubel float �� ����

	//rgb �� �����   00ff0000(����) 00ff00(�ʷ�) 0000ff(�Ķ�)

	//int r, g, b;
	//printf("red?"); scanf("%d", &r); //4byte
	//printf("red?"); scanf("%d", &g); //4byte
	//printf("red?"); scanf("%d", &b); //4byte
	//unsigned int rgb = r<<16 | g<<8 | b;
	//printf("RGB: %0X\n", rgb);

	return 0;
}
