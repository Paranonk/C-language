#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	/* 
	
	char* s1;

	printf("���ڿ��� �Է��ϼ���\n");
	scanf("%[^\n]s", s1);

	printf("%s\n", s1);

	*/

	//���ڿ� ������ �ּҰ� �Ҵ�� �����ʹ� scanf �Լ��� ����� �� ���� . 


	//�Է°��� �����Ϳ� �����Ϸ��� �޸𸮸� �Ҵ� �Ѵ�.
	char* s2 = malloc(sizeof(char) * 10);

	printf("���ڿ��� �Է��ϼ���\n");
	scanf("%s", s2);
	printf("%s\n", s2);

	free(s2);

	//  ���ڿ� �� �� �Է� �ޱ�
	char s3[10];
	char s4[10];

	printf("���ڿ��� �ΰ� �Է��ϼ���: ");

	scanf("%s %s", s3, s4);

	printf("%s\n", s3);
	printf("%s\n", s4);


}