#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	////do~while
	//int a = -1;
	//do {
	//	printf("%d\n", a); 
	//} while (a>0); //�ּ��ѹ��� ����

	//����ڿ��� �Է��� �޾Ƽ� y�̸� '�����÷���'��� ���

	//char answer='y';
	//while (answer == 'y') {
	//	printf("������ �����Ͻðڽ��ϱ�?");
	//	scanf("%c", &answer);
	//	getchar(); //enter�� ó��
	//	printf("����~~~~�÷���\n");
	//}

	//char answer = 'y';
	//do{
	//	printf("����~~~~�÷���\n");
	//	printf("������ ��� �÷����ұ��?");
	//	scanf("%c", &answer);
	//	getchar(); //enter�� ó��
	//} while (answer == 'y');

	int s, sum = 0;
	do {
		printf("������ �Է��ϼ���");
		scanf("%d", &s);
		sum += s;

	} while (s != 0);
	printf("���ݱ��� ���Ѽ��� %d�Դϴ�", sum);

	return 0;
}