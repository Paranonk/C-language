#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	
	char s1[10] = "woorld";
	char* s2 = malloc(sizeof(char) * 20);
	//포인터는 읽기 전용
	
	strcpy(s2, "Hello"); //문자열 복사 기능
	strcat(s2, s1); //문자열 연결 지어 붙이는 기능

	// 포인터는 읽기전용이라 꼭 동적 메모리를 할당해야만 쓸 수 가 있다. 



	printf("%s", s2);

	free(s2);
}