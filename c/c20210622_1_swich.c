#define _CRT_SECURE_NO_WARNINGS //scanf �Լ��� ����ϱ� ���ؼ�
#include <stdio.h>

int main() {
	//�������ǹ�:swich~case
	/*int a = 1;
	switch (a) {
		case0:
			printf("zero\n");
		case1:
			printf("one\n");
		case2:
			printf("two\n"); break;
		default:
			printf("�߸��ȼ���\n");*/

	//���� �������� ���
	/*int mon = 2;		
	switch(mon){
		case 1:			
		case 3:
		case 5:
		case 7:	
		case 8:
		case 10:
		case 12:
			printf("31"); break;
		case 2:
			printf("28"); break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30"); break;
		default:
			printf("�߸��� ���Դϴ�."); break;
		}*/
	
	//�޴�����
	int no;
	printf("1.�����\n 2.«��\n 3.������\n 4.�����\n 5.����\n 6.���İ�Ƽ\n");
	printf("�޴���?");
	scanf("%d", &no);
	printf("1.�����\n 2.«��\n 3.������\n 4.�����\n 5.����\n 6.���İ�Ƽ\n");
	switch (no) {
	case 1:
	case 2:
		printf("�߽��ڳ�"); break;
	case 3:
	case 4:
		printf("�ѽ��ڳ�"); break;
	case 5:
	case 6:
		printf("����ڳ�"); break;

	default:
		printf("���� �޴��Դϴ�."); break;
	}

	return 0;
}