#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���ڿ��� ������
	//char str[] = "happy";  //������ �÷���// �ڹ�
	////str = "angry";//str�� ��� ���� �Ұ�
	//char* p = str;
	//printf("%s/n", p);

	//p = "python";
	//puts(p);//���ڿ� �����Լ�


	//�ǽ�) �̸��� �Է¹޾� �Է¹޾� ���
	char name[20];
	char* p = name;
	while (1) {
		printf("�̸���?");
		gets_s(name, sizeof(name));
		//puts(p);//enter ���
		//printf("�� ȯ���մϴ�.");
		printf("%s�� ȯ���մϴ�.\n", p);

	}
}