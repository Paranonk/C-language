#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������ڸ���
	char* s1 = malloc(sizeof(char) * 30);
	strcpy(s1, "The Little Prince");

	char* ptr = strtok(s1, " ");

	

	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	free(s1);
}