#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char* s1 = malloc(sizeof(char) * 20);


	
	sprintf(s1,"Hello %s","world");
	printf("%s", s1);

	free(s1);
}
