#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////��������
//int sum = 0;
//�Ű������� ������ �Է¹޾� �����ϴ� �Լ�
int UserSum(int a) {
	//static ����(static �޸𸮱���)
	// stack (�޸� ����:FILO����)
	//��������ó��
	//�Լ������ʷ� ���������� ���� ���α׷� ����� �Ҹ�.
	//����� �Լ��ȿ����� ���ٰ���
	static int sum = 0;
	sum = sum + a;
	return sum;
}

//�Ű�����: ����
//���ϰ� : ���Լ��� ������ Ƚ��
//�Լ��� �̸� :countTest

int countTest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}

int main() {
	//��������,�������� ��뿹
	//printf("����:%d\n",UserSum(10));
	//printf("����:%d\n", UserSum(20));
	//sum = 100; static ���� ���ٺҰ�

	//�ݺ����� �̿��ؼ� �Լ��� 10�� ����
	//����Ƚ��: 1
	//����Ƚ�� 10

	for (int i = 0; i < 10; i++) {
		printf("����Ƚ��: %d\n", countTest());
	}

}