#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	
	char s1[10] = "woorld";
	char* s2 = malloc(sizeof(char) * 20);
	//�����ʹ� �б� ����
	
	strcpy(s2, "Hello"); //���ڿ� ���� ���
	strcat(s2, s1); //���ڿ� ���� ���� ���̴� ���

	// �����ʹ� �б������̶� �� ���� �޸𸮸� �Ҵ��ؾ߸� �� �� �� �ִ�. 



	printf("%s", s2);

	free(s2);
}