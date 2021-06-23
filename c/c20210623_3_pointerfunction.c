#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수:call bu reference

//main함수의 a의 값을 변경가능.
void change(int* p) {
	*p = 20;
}
//main함수의 두수 바꾸기
void twochange(int* pa, int* pb) {

	int temp = *pa;
	*pa = *pb;
	*pb = temp;

}
//합계구하기
void sumCal(int* pa, int* psum) {
	*psum += *pa;
}

int main() {
	//함수에 포인터넘기기
	/*int a=10;
	change(&a);

	scanf("%d",&a);

	printf("a:%d\n", a);*/
	//두수바꾸기
	/*int a = 10, b = 20;
	twochange(&a, &b);
	printf("%d %d\n", a, b);*/

	//반복문을 이용해서 입력받은 값을 누적.
	//함수에서 누적
	//int a,sum=0;
	//scanf("");

	int a, sum = 0;
	while (1) {
		printf("정수는?");
		scanf("%d", &a);
		if (a == 0) break;
		sumCal(&a, &sum);//call by reperence
	}

	printf("누적합계:%d", sum);

}