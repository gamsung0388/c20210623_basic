#include <stdio.h>
int main() {
	//������(+ - * /)
	//int a = 20, b = 3;
	//����+����=>����
	//�Ǽ�+����=>�Ǽ�
	//printf("%d + %d = %d\n", a, b, a + b); //���ϱ�
	//printf("%d - %d = %d\n", a, b, a - b); //����
	//printf("%d * %d = %d\n", a, b, a * b); //��
	//printf("%d / %d = %.2f\n", a, b,(double)a / b); //20(�Ǽ�) / 3(����) xx (20/3) xx double/float �Ѵ� ��� doble(�⺻) �Ҽ���
	//printf("%d %% %d = %d\n", a, b, a % b); //������
	//printf("%d / %d = %d\n", a, b, a / b); //�ø��� ��

	/*int a = 50, b = 3;
	printf("��: %d\n", a / b);
	printf("������: %d\n",a%b);
	printf("���� �Ǽ���: %.3f\n",(double)a/b);
	*/
	//���׿�����
	//���������� ++ --

	//�տ� ���̸� ����, �ڿ� ���̸� ����(������)/����� ����.
	//int a = 10;
	//a++;//a += 1;//a = a + 1;
	//printf("%d\n", a);
	//a--;//a-=1;//a = a-1;
	//printf("%d\n", a);

	//
	//int a = 10;
	//printf("%d\n",a++); //����� �ϰ� �����ض�
	//printf("%d\n",a); //
	//printf("%d\n", ++a);//�����ϰ� ����ض�

	//int a = 10;
	//a--; //9
	//printf("%d\n", --a); //8  
	//printf("%d\n", a++); //8 // (������) 9
	//printf("%d\n", a--); //9 // (������) 8
	//printf("%d\n", a); //8 // 8

	//int a = 10; //
	//int b = --a; //a = 9 b=9
	//int c = b++; //b=10 // c= 9
	//b = ++a; //a=10 b= 10

	//printf("%d %d %d \n", a, b, c);

	//���迬����
	//int a = 10, b = 20;
	//printf("%d\n",a>b); //0 false
	//printf("%d\n", a<b); //1 true
	//printf("%d\n", a == b); //false
	//printf("%d\n", a != b); //true

	//��������:&&(and), ||(or), !(not)
	//int a = 10, b = 20;
	//printf("%d\n", a > 0 && b > 0); //1
	//printf("%d\n", a < 0 && b < 0); //0
	//printf("%d\n", a > 0 || b < 0); //1
	//printf("%d\n", !(a < 0)); //1
	//
	//��Ʈ������
	//8bit - 1byte
	//0,1 A -> 65 // byte ���

	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);
	//// ����Ʈ ������
	//printf("%d\n", 4>>2); //1 //���������� �κ�Ʈ �б� ������
	//printf("%d\n", 4 << 1); //8 //�������� �κ�Ʈ �б� ���ϱ�

	//���� ������ if�̶� ����
	//(num1 > num2)?(���϶� ���๮��): (�����϶� ���๮��)
	//// ���ǹ� 
	//int a = -10;
	//a > 0 ? printf("���") : printf("����") ;

	//�μ��� ū���� ���
	/*int a = 10, b = 20;
	a > b ? printf("%d\n",a) : printf("%d\n",b);


	int c = a > b ? a : b;
	printf("%d\n", c );*/

	//int a = 20, b = 10, c = 30;
	//int max = a > b ? a : b;
	//max = max > c ? max : c;

	/*int max = a > b ? (a > c ? a : c) : (b > c ? b : c);*/

	//printf("����ū ���� %d �Դϴ�", max);

	int a = 9;
	//a % 2 == 0 ? printf("%d�� ¦���Դϴ�.",a):printf("%d�� Ȧ���Դϴ�.",a);
	/*char arr[10];*/

	//������ ������ �̿��ؼ� ���
	char* p = a % 2 == 0 ? "¦��" : "Ȧ��";  //p�� �������� �ּ� 
	printf("%d�� %s", a, p); //a = �����̸�

	return 0;
}