#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

//�ε��� ����
int main() {
	//�迭 : array
	//int arr[3];
	/*arr[0] = 10; arr[1] = 20; arr[2] = 30;
	*/
	//printf("%d %d %d\n",arr[0],arr[1],arr[2]);
	//printf("%p %d\n", arr, sizeof(arr)); //���� �ּ� 4byte

	//�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);}
	//

	//�ǽ�)
	//double arr[3] = {1.1,2.1,3.1};//����,�ʱ�ȭ
	//double arr[3];
	//�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr)/sizeof(double);//24/8=3
	//printf("������:%d\n", size);

	//for (int i = 0; i < size; i++) {
	//	arr[i] = (i + 1)+0.1;
	//}


	//for (int i = 0; i < size; i++) {
	//	printf("%.1f\n", arr[i]);
	//}

	//���ڿ� �迭
	//char arr[] = {'i','u','l','o','v','e'}; //���ڿ��� ''
	//
	//int size = sizeof(arr) / sizeof(char);

	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]);
	//}

	//�迭���� ��
	//C�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�

	/*int arr[] = { 2,5,7,40,39 };
	int sum = 0;
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++) {

		sum += arr[i];
	}
	printf("�հ�� %d", sum);*/


	//C�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�
	//LEN ��ũ�λ�� 5 ��� �޸� �Ҵ�
	//LEN = define�� ���ǵ� ��ũ�� ���: �����ϵǱ����� ��ü
	// 	   ����� �����迭�̱⿡ �ٲܼ� ����.
	//����� ������ �Ұ�
	//������ ���� ����.
	/*int a = 5;*/ //������Ÿ��/�޸𸮷�Ÿ��
	//�����迭 / �����迭 
	// 
	// 
	//int arr[LEN] ,sum =0 ; //�Է°������� ������ ������ߵ�
	//int size = sizeof(arr) / sizeof(int);

	////c���� ����/������ �������ִ� �Ÿ� ����
	////�Է¹ޱ�

	//for (int i = 0; i < size; i++) {
	//	printf("[%d]������?",i+1);
	//	scanf("%d", &arr[i]);
	//}

	////����ϱ�

	//for (int i = 0; i < size; i++) {
	//	printf("%d %p \n", arr[i],&arr[i]);
	//}


	////�հ豸�ϱ�
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�հ�� %d", sum); 

	//�ǽ�)���л��� ���� �Է¹޾� �հ�/���/�˻�
	int score[3], sum = 0, avg = 0;
	int size = sizeof(score) / sizeof(int);


	for (int i = 0; i < size; i++) {
		printf("%d�� ������?\n", i + 1);
		scanf("%d", &score[i]);
	}
	printf("------------------------\n");
	for (int i = 0; i < size; i++) {
		printf("%d������: %d��\n", i + 1, score[i]);
		sum += score[i];
	}
	printf("-----------------------------\n");
	printf("�հ�� %d, ����� %.2f\n", sum, (double)sum / size);


	/*int no;
	printf("������ �Է��ϼ���");
	scanf("%d", &no);
	printf("������%d\n",score[no-1]);
	*/
	int no;
	char quit;//���ắ��

	//while (1) {
	//	printf("������ �Է��ϼ���");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no < 1 || no>3) {
	//		printf("�߸��ȹ�ȣ\n");
	//		continue; //��������
	//	}
	//	printf("������%d\n", score[no - 1]);
	//	pirntf("******************");
	//	printf("����(q)?");
	//	scanf("%c", &quit);
	//	if (quit == 'q')break;
	//}

	do {
		printf("��ȣ�� �Է��ϼ���");
		scanf("%d", &no);
		getchar(); //����ó��
		//�߸��� ��ȣ ó��
		if (no < 1 || no>3) {
			printf("�߸��ȹ�ȣ\n");
			continue; //��������
		}
		printf("������%d\n", score[no - 1]);
		printf("******************\n");
		printf("����(q)?");
		scanf("%c", &quit);
		/*if (quit == 'q')break;*/
	} while (quit != 'q');

	return 0;
}