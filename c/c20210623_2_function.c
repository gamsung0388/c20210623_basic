#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수:없다, 반환값:없다.
void voidTest() {}

//인수 인자 매개변수 1=>1
//매개변수: 한개 반환값 없다
void voidTest2(int a) {
	printf("매개변수:%d\n", a);
}

void voidTest3(int a, int b) {
	printf("두수의 합 :%d\n", a + b);
}

//매개변수:반지름
//원의 넓이를 출력해주는 기능
//하무수의 이름:area,매개변수 이름:r(double)

void area(double r) {
	printf("원의 넓이:%.2f\n", r * r * 3.14);
}

//매개변수:반지름(double)
//반환값:넓이(double)
//원의 넓이를 구해서 반환하는 함수
//return이 없으면 void
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area;
}

//세정수를 입력받아서 합을 반환하는 함수
int add(int a, int b, int c) {
	return a + b + c;
}

//두개의 정수를 매개변수로 받아서 나눈실수값을 반환하는 함수
double div(int a, int b) {
	return (double)a / b;
}

//두수를 매개로 받아서 두수중 큰수를 반환
int max(int a, int b) {
	int m;
	if (a > b)
		m = a;
	else if (b > a)
		m = b;
	else
		m = 0; //0을 리턴하게 만듬

	return m;//return 함수의 종료
}

//진입점함수
int main() {

	//double r;
	//printf("반지름은?");
	//scanf("%lf", &r); //call by reperence 방식 
	//area(r); //call by value
	// 
	//double r = 3.6;
	//double rValue = areaReturn(r); //call by value 방식
	//printf("넓이:%.2f\n", rValue);
	//
	//printf("넓이:%d\n", add(20, 30, 50));
	// a = 10, b = 3;
	//double d = div(a, b);
	//printf("실수값:%.2f/n",d);

	int a = 20, b = 20;
	int n = max(a, b);
	if (n != 0)
		printf("큰수는 %d\n", n);
	else
		printf("%d == %d\n", a, b);

	return 0;
}