#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//문자열관련함수

int main() {
	//문자
	/*char c;
	scanf("%c", &c);
	printf("문자:%c\n", c);*/

	//에코기능이 있다.
	/*int c = getchar();
	printf("입력문자");
	putchar(c);*/

	//getch()함수
	/*char c = getch();
	printf("입력문자:");
	purchar(c);*/

	//비밀번호를 입력하면 *가 출력
	//char pw[5];
	//printf("password?");
	//for (int i = 0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*');
	//}
	//pw[4] = '\0';//통째로 출력 가능 //문자열의 끝
	//printf("비밀번호:%s\n", pw);

	//문자열
	//char s[6] = "hello";
	//char s[6]; //배열의 이름은 주소
	//scanf("%s\n", s); //공백처리 안됨
	//printf("%s\n", s);


	//문자열 전용함수:공백처리가능
	/*char name[20];
	printf("이름은?");
	gets(name);
	printf("당신의이름"); puts(name);*/

	//문자열 전용함수

	//char name[10] = "hong";
	//name: "kim";
	/*strcpy(name,"kim"); //call by reperence //주소
	puts(name);*/
	//isdight() //숫자여부
	//newnum //문자열을 숫자로 변환하는 함수
	//숫자한테는 숫자
	//문자한테는 문자

//	char c[16];
//
//
//	printf("문자열을 입력하세요:");
//	gets(c);
//	printf("값:"); puts(c);
//	printf("길이: %d", strlen(c));;
//	printf("주소: %d", sizeof(c[16]));
//	return 0;
//}