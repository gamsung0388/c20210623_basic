#define _CRT_SECURE_NO_WARNINGS //scanf 함수를 사용하기 위해서
#include <stdio.h>

int main() {  //void main or main(void) == return되는게 없다.
	//입력함수
	/*int a;*/

	//printf("정수는?");
	//scanf("%d",&a); //&a = a의 주소
	//printf("입력한 값 : %d\n %p\n",a, &a);
	//%p 주소를 불러오는 것//16진수, 0~9, A~F
	
	//실수형 입력받기
	//float f;
	//double d;
	//printf("실수는?");
	//scanf("%f",&f);
	
	//printf("double 실수는?");
	//scanf("%lf", &d); //포맷문자열 double일 경우: %lf 
	//
	//printf("입력한 값: %f %p\n %f %p\n", f,&f,d,&d);

	//문자형 입력받기
	/*char c;
	printf("문자는?");
	scanf("%c", &c);
	printf("입력한 값은 %c\n",c);*/

	//실습 두정수를 입력받아서 합계를출력
	/*int a, b;
	printf("두정수를 입력하세요");
	scanf("%d%d",&a,&b);
	printf("합한 값은: %d", a + b);*/

	//실습 오늘의 날짜(년/월/일)를 입력받아 출력
	/*int year, month, day;
	printf("년도를 입력하시오");
	scanf("%d%d%d",&year,&month,&day);
	printf("%d년 %d월 %d일\n", year, month, day);*/

	/*int a, b;
	printf("두정수를 입력하세요");
	scanf("%d%d",&a,&b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %f\n", a, b, (float)a / b);*/

	//엔터 처리하기위한 예제
	//int a, b;
	//char sign;
	//printf("첫번째는?"); //10 + 20;
	//scanf("%d", &a);
	//printf("두번째는?");
	//scanf("%d", &b);
	//
	////한문자를 읽어서 반환하는 함수
	//getchar(); //엔터를 처리하기위한 목적으로 씀

	//printf("세번째는?");
	//scanf("%c", &sign);

	//	
	//printf("%d %c %d\n", a, sign, b);

	//int amount, pay;//물건값, 지불한 돈
	//printf("물건값은?");
	//scanf("%d", &amount);
	//printf("지불한 돈?");
	//scanf("%d", &pay);

	//pay > amount ? 
	//	printf("거스름돈은 %d 원",pay-amount) :
	//	amount > pay ? printf("%d원이 부족합니다.",amount-pay):
	//	printf("정산완료\n");
	// 

	//int kor, eng, math;
	//printf("점수는?");
	//scanf("%d%d%d", &kor, &eng, &math);
	//int sum = kor + eng + math;
	//printf("합계는 %d\n", sum);
	//printf("평균은 %.2f", sum/3.); //. or doubel float 다 가능

	//rgb 값 만들기   00ff0000(빨강) 00ff00(초록) 0000ff(파랑)

	//int r, g, b;
	//printf("red?"); scanf("%d", &r); //4byte
	//printf("red?"); scanf("%d", &g); //4byte
	//printf("red?"); scanf("%d", &b); //4byte
	//unsigned int rgb = r<<16 | g<<8 | b;
	//printf("RGB: %0X\n", rgb);

	return 0;
}
