#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű�����:����, ��ȯ��:����.
void voidTest() {}

//�μ� ���� �Ű����� 1=>1
//�Ű�����: �Ѱ� ��ȯ�� ����
void voidTest2(int a) {
	printf("�Ű�����:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("�μ��� �� :%d\n", a + b);
}

//�Ű�����:������
//���� ���̸� ������ִ� ���
//�Ϲ����� �̸�:area,�Ű����� �̸�:r(double)

void area(double r) {
	printf("���� ����:%.2f\n", r * r * 3.14);
}

//�Ű�����:������(double)
//��ȯ��:����(double)
//���� ���̸� ���ؼ� ��ȯ�ϴ� �Լ�
//return�� ������ void
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area;
}

//�������� �Է¹޾Ƽ� ���� ��ȯ�ϴ� �Լ�
int add(int a, int b, int c) {
	return a + b + c;
}

//�ΰ��� ������ �Ű������� �޾Ƽ� �����Ǽ����� ��ȯ�ϴ� �Լ�
double div(int a, int b) {
	return (double)a / b;
}

//�μ��� �Ű��� �޾Ƽ� �μ��� ū���� ��ȯ
int max(int a, int b) {
	int m;
	if (a > b)
		m = a;
	else if (b > a)
		m = b;
	else
		m = 0; //0�� �����ϰ� ����

	return m;//return �Լ��� ����
}

//�������Լ�
int main() {

	//double r;
	//printf("��������?");
	//scanf("%lf", &r); //call by reperence ��� 
	//area(r); //call by value
	// 
	//double r = 3.6;
	//double rValue = areaReturn(r); //call by value ���
	//printf("����:%.2f\n", rValue);
	//
	//printf("����:%d\n", add(20, 30, 50));
	// a = 10, b = 3;
	//double d = div(a, b);
	//printf("�Ǽ���:%.2f/n",d);

	int a = 20, b = 20;
	int n = max(a, b);
	if (n != 0)
		printf("ū���� %d\n", n);
	else
		printf("%d == %d\n", a, b);

	return 0;
}