#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void allocMemory(void** ptr, int size) {


	*ptr = malloc(size);
}

int main() {

	long long* numPtr = NULL;

	allocMemory((void**)&numPtr, sizeof(long long));
	*numPtr = 10;
	printf("%lld\n", *numPtr);

	free(numPtr);


}
