#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a');  //strchr ���ڿ� ó������ Ž��

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a'); //��ҹ��� �����ؼ� 'A'�� �׳� �ѱ�.
	}

	char* ptr1 = strrchr(s1, 'a'); // strrchr ���ڿ� ���������� Ž�� 
	while (ptr1 != NULL)
	{
		printf("%s\n", ptr1);
		ptr1 = strchr(ptr1 + 1, 'a'); //��ҹ��� �����ؼ� 'A'�� �׳� �ѱ�.
	}

	char s2[100] = "A Garden Diary A Garden Diary A Garden Diary";   //strstr ���ڿ��� �˻�
	char* ptr2 = strstr(s2, "den");

	while (ptr2 != NULL){
		printf("%s\n", ptr2);
		ptr2 = strstr(ptr2+1, "den");
	}
	


}
