#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ�:call bu reference

//main�Լ��� a�� ���� ���氡��.
void change(int* p) {
	*p = 20;
}
//main�Լ��� �μ� �ٲٱ�
void twochange(int* pa, int* pb) {

	int temp = *pa;
	*pa = *pb;
	*pb = temp;

}
//�հ豸�ϱ�
void sumCal(int* pa, int* psum) {
	*psum += *pa;
}

int main() {
	//�Լ��� �����ͳѱ��
	/*int a=10;
	change(&a);

	scanf("%d",&a);

	printf("a:%d\n", a);*/
	//�μ��ٲٱ�
	/*int a = 10, b = 20;
	twochange(&a, &b);
	printf("%d %d\n", a, b);*/

	//�ݺ����� �̿��ؼ� �Է¹��� ���� ����.
	//�Լ����� ����
	//int a,sum=0;
	//scanf("");

	int a, sum = 0;
	while (1) {
		printf("������?");
		scanf("%d", &a);
		if (a == 0) break;
		sumCal(&a, &sum);//call by reperence
	}

	printf("�����հ�:%d", sum);

}