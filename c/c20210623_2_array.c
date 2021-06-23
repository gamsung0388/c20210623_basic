#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5

//인덱스 숫번
int main() {
	//배열 : array
	//int arr[3];
	/*arr[0] = 10; arr[1] = 20; arr[2] = 30;
	*/
	//printf("%d %d %d\n",arr[0],arr[1],arr[2]);
	//printf("%p %d\n", arr, sizeof(arr)); //폼의 주소 4byte

	//반복문을 이용해서 초기화
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	////반복문을 이욜해서 출력
	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);}
	//

	//실습)
	//double arr[3] = {1.1,2.1,3.1};//선언,초기화
	//double arr[3];
	//배열의 크기 구하기
	//int size = sizeof(arr)/sizeof(double);//24/8=3
	//printf("사이즈:%d\n", size);

	//for (int i = 0; i < size; i++) {
	//	arr[i] = (i + 1)+0.1;
	//}


	//for (int i = 0; i < size; i++) {
	//	printf("%.1f\n", arr[i]);
	//}

	//문자열 배열
	//char arr[] = {'i','u','l','o','v','e'}; //문자열은 ''
	//
	//int size = sizeof(arr) / sizeof(char);

	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]);
	//}

	//배열값의 합
	//C는 정적배열
	//a에 값이 할당되는 시점은 런타임시

	/*int arr[] = { 2,5,7,40,39 };
	int sum = 0;
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++) {

		sum += arr[i];
	}
	printf("합계는 %d", sum);*/


	//C는 정적배열
	//a에 값이 할당되는 시점은 런타임시
	//LEN 메크로상수 5 대신 메모리 할당
	//LEN = define에 정의된 매크로 상수: 컴파일되기전에 대체
	// 	   상수라 정적배열이기에 바꿀수 없다.
	//상수는 변경이 불가
	//변수는 변경 가능.
	/*int a = 5;*/ //컴파일타임/메모리런타임
	//동적배열 / 정적배열 
	// 
	// 
	//int arr[LEN] ,sum =0 ; //입력값없으면 사이즈 정해줘야됨
	//int size = sizeof(arr) / sizeof(int);

	////c언어는 정적/사이즈 정해져있는 거만 가능
	////입력받기

	//for (int i = 0; i < size; i++) {
	//	printf("[%d]정수는?",i+1);
	//	scanf("%d", &arr[i]);
	//}

	////출력하기

	//for (int i = 0; i < size; i++) {
	//	printf("%d %p \n", arr[i],&arr[i]);
	//}


	////합계구하기
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("합계는 %d", sum); 

	//실습)반학생의 점수 입력받아 합계/평균/검색
	int score[3], sum = 0, avg = 0;
	int size = sizeof(score) / sizeof(int);


	for (int i = 0; i < size; i++) {
		printf("%d번 점수는?\n", i + 1);
		scanf("%d", &score[i]);
	}
	printf("------------------------\n");
	for (int i = 0; i < size; i++) {
		printf("%d번점수: %d점\n", i + 1, score[i]);
		sum += score[i];
	}
	printf("-----------------------------\n");
	printf("합계는 %d, 평균은 %.2f\n", sum, (double)sum / size);


	/*int no;
	printf("점수를 입력하세요");
	scanf("%d", &no);
	printf("점수는%d\n",score[no-1]);
	*/
	int no;
	char quit;//종료변수

	//while (1) {
	//	printf("점수를 입력하세요");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no < 1 || no>3) {
	//		printf("잘못된번호\n");
	//		continue; //간결해짐
	//	}
	//	printf("점수는%d\n", score[no - 1]);
	//	pirntf("******************");
	//	printf("종료(q)?");
	//	scanf("%c", &quit);
	//	if (quit == 'q')break;
	//}

	do {
		printf("번호를 입력하세요");
		scanf("%d", &no);
		getchar(); //엔터처리
		//잘못된 번호 처리
		if (no < 1 || no>3) {
			printf("잘못된번호\n");
			continue; //간결해짐
		}
		printf("점수는%d\n", score[no - 1]);
		printf("******************\n");
		printf("종료(q)?");
		scanf("%c", &quit);
		/*if (quit == 'q')break;*/
	} while (quit != 'q');

	return 0;
}