#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

	//서식 지정자를 이용한 문자열 사용법
	char* s1 = malloc(sizeof(char) * 20);


	
	sprintf(s1,"Hello %s","world");
	printf("%s", s1);

	free(s1);
}
