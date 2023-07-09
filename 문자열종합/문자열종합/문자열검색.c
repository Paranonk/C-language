#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a');  //strchr 문자열 처음부터 탐색

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a'); //대소문자 구분해서 'A'는 그냥 넘김.
	}

	char* ptr1 = strrchr(s1, 'a'); // strrchr 문자열 끝에서부터 탐색 
	while (ptr1 != NULL)
	{
		printf("%s\n", ptr1);
		ptr1 = strchr(ptr1 + 1, 'a'); //대소문자 구분해서 'A'는 그냥 넘김.
	}

	char s2[100] = "A Garden Diary A Garden Diary A Garden Diary";   //strstr 문자열로 검색
	char* ptr2 = strstr(s2, "den");

	while (ptr2 != NULL){
		printf("%s\n", ptr2);
		ptr2 = strstr(ptr2+1, "den");
	}
	


}
