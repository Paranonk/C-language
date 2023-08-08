#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

union Data {
	char c1;
	short num1;
	int num2;

};

int main() {

	union Data d1;

	d1.num2 = 0x12345678;


	//리틀엔디언 저장방식
	printf("0x%x\n", d1.num2);
	printf("0x%x\n", d1.num1);
	printf("0x%x\n", d1.c1);



	printf("%d\n", sizeof(d1));

}