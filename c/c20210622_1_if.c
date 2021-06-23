#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//조건식이 참일 때 수행할 문장/ 거짓일때 수행할 문장을 구별

	/*int a = 0;
	if (a > 0) {
		printf("양수\n");
	}else{	
		if (a < 0) {
			printf("음수\n");
		}else{
			printf("양수도 음수도 아닌 수");
		}
	}*/

	/*int a = 0;
	if (a > 0)
		printf("양수\n");
	else if (a < 0)
		printf("음수\n");
	else
		printf("양수도 음수도 아닌 수");
	*/


	//실습 문제: 두정수를 입력받아 큰수를 출력(두수는 같을수도 있다.

	//int a, b;
	//printf("두정수를 입력하시오");
	//scanf("%d%d",&a,&b);
	//if (a > b)
	//	printf("%d\n",a);
	//else if (a < b)
	//	printf("%d\n",b);
	//else
	//	printf("두수는 같다.");

	//실습 문제:학점이 90이상 a~60미만 f

	/*int a;
	printf("점수를 입력하세요");
	scanf("%d",&a);

	if (a > 100 || a < 0)
		printf("잘못된점수");
	else if (a >= 90)
		printf("A학점");
	else if (a >= 80)
		printf("B학점");
	else if (a >= 70)
		printf("C학점");
	else if (a >= 60)
		printf("D학점");
	else
		printf("F학점");*/


	//실습)과락체크=>합계평균
	/*int kor, eng, math;
	printf("국영수 점수를 입력하세요");
	scanf("%d%d%d", &kor, &eng, &math);
	int sum = kor + eng + math;
	double avg = (kor + eng + math) / 3;
	if (kor < 60 || eng < 60 || math < 60)
		printf("과락");
	else
		printf("총점은 %d, 평균은 %.2f",sum, avg);*/

	//실습 문제: 윤년 입력
	/*int year;
	printf("연도를 입력하세요");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
		printf("윤년");
	else
		printf("윤년아니다");*/


	//실습: 메뉴 고르기
	int no;
	printf("1.자장면\n 2.짬뽕\n 3.설렁탕\n 4.비빔밥\n 5.피자\n 6.스파게티\n");
	printf("메뉴는?");
	scanf("%d", &no);
	if (no == 1 || no == 2) {
		printf("중식코너\n");
	}else if (no == 3 || no == 4) {
		printf("한식코너\n");
	}else if (no == 5 || no == 6) {
		printf("양식코너\n");
	}else {
		printf("잘못된메뉴\n");
	}
	return 0;

}