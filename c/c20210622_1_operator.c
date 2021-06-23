#include <stdio.h>
int main() {
	//연산자(+ - * /)
	//int a = 20, b = 3;
	//정수+정수=>정수
	//실수+정수=>실수
	//printf("%d + %d = %d\n", a, b, a + b); //더하기
	//printf("%d - %d = %d\n", a, b, a - b); //빼기
	//printf("%d * %d = %d\n", a, b, a * b); //곱
	//printf("%d / %d = %.2f\n", a, b,(double)a / b); //20(실수) / 3(정수) xx (20/3) xx double/float 둘다 비슷 doble(기본) 소수점
	//printf("%d %% %d = %d\n", a, b, a % b); //나머지
	//printf("%d / %d = %d\n", a, b, a / b); //올림한 몫

	/*int a = 50, b = 3;
	printf("몫: %d\n", a / b);
	printf("나머지: %d\n",a%b);
	printf("나눈 실수값: %.3f\n",(double)a/b);
	*/
	//단항연산자
	//증감연산자 ++ --

	//앞에 붙이면 전위, 뒤에 붙이면 후위(연산자)/결과는 같다.
	//int a = 10;
	//a++;//a += 1;//a = a + 1;
	//printf("%d\n", a);
	//a--;//a-=1;//a = a-1;
	//printf("%d\n", a);

	//
	//int a = 10;
	//printf("%d\n",a++); //출력을 하고 증가해라
	//printf("%d\n",a); //
	//printf("%d\n", ++a);//증가하고 출력해라

	//int a = 10;
	//a--; //9
	//printf("%d\n", --a); //8  
	//printf("%d\n", a++); //8 // (찍히고) 9
	//printf("%d\n", a--); //9 // (찍히고) 8
	//printf("%d\n", a); //8 // 8

	//int a = 10; //
	//int b = --a; //a = 9 b=9
	//int c = b++; //b=10 // c= 9
	//b = ++a; //a=10 b= 10

	//printf("%d %d %d \n", a, b, c);

	//관계연산자
	//int a = 10, b = 20;
	//printf("%d\n",a>b); //0 false
	//printf("%d\n", a<b); //1 true
	//printf("%d\n", a == b); //false
	//printf("%d\n", a != b); //true

	//논리연산자:&&(and), ||(or), !(not)
	//int a = 10, b = 20;
	//printf("%d\n", a > 0 && b > 0); //1
	//printf("%d\n", a < 0 && b < 0); //0
	//printf("%d\n", a > 0 || b < 0); //1
	//printf("%d\n", !(a < 0)); //1
	//
	//비트연산자
	//8bit - 1byte
	//0,1 A -> 65 // byte 계산

	//printf("%d\n", 4 & 3);
	//printf("%d\n", 4 | 3);
	//// 시프트 연산자
	//printf("%d\n", 4>>2); //1 //오른쪽으로 두비트 밀기 나누기
	//printf("%d\n", 4 << 1); //8 //왼쪽으로 두비트 밀기 곱하기

	//삼항 연산자 if이랑 유사
	//(num1 > num2)?(참일때 수행문장): (거짓일때 수행문장)
	//// 조건문 
	//int a = -10;
	//a > 0 ? printf("양수") : printf("음수") ;

	//두수중 큰수를 출력
	/*int a = 10, b = 20;
	a > b ? printf("%d\n",a) : printf("%d\n",b);


	int c = a > b ? a : b;
	printf("%d\n", c );*/

	//int a = 20, b = 10, c = 30;
	//int max = a > b ? a : b;
	//max = max > c ? max : c;

	/*int max = a > b ? (a > c ? a : c) : (b > c ? b : c);*/

	//printf("가장큰 값은 %d 입니다", max);

	int a = 9;
	//a % 2 == 0 ? printf("%d은 짝수입니다.",a):printf("%d는 홀수입니다.",a);
	/*char arr[10];*/

	//포인터 변수를 이용해서 출력
	char* p = a % 2 == 0 ? "짝수" : "홀수";  //p가 변수이자 주소 
	printf("%d는 %s", a, p); //a = 변수이름

	return 0;
}