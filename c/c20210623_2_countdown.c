#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//�Ű�����:ī��Ʈ�ٿ� ��
//��ȯ��:����.
//���:ī��Ʈ�ٿ��� ���

int countdown(int s) {

	for (int i = s; i > -1; i--) {
		Sleep(1000); //1/1000�� ����
		printf("%d��\n", i);
	}
}

int main() {
	//ī��Ʈ �ٿ�
	//5��...�߻�
	printf("ī��Ʈ�ٿ� ����\n");
	countdown(5);
	printf("�߻�");

	return 0;
}ss