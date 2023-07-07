#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	/* 
	
	char* s1;

	printf("문자열을 입력하세요\n");
	scanf("%[^\n]s", s1);

	printf("%s\n", s1);

	*/

	//문자열 리털의 주소가 할당된 포인터는 scanf 함수를 사용할 수 없다 . 


	//입력값을 포인터에 저장하려면 메모리를 할당 한다.
	char* s2 = malloc(sizeof(char) * 10);

	printf("문자열을 입력하세요\n");
	scanf("%s", s2);
	printf("%s\n", s2);

	free(s2);

	//  문자열 두 개 입력 받기
	char s3[10];
	char s4[10];

	printf("문자열을 두개 입력하세요: ");

	scanf("%s %s", s3, s4);

	printf("%s\n", s3);
	printf("%s\n", s4);


}