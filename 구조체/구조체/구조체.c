#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _Person{ //_Person�� ����ü �̸� �Ǵ� �±׶�� �θ� struct �ڿ� �±׸� �������� �͸���ü�� ��,
	char name[20];
	int age;
	char address[100];

}Person; //Person�� ��Ī �Ǵ� Ÿ���̸�  ��Ī�� ������ ���� �ݵ�� typedef�� ����.

int main() {


	Person p1;

	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ��걸 �ѳ���");

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n", p1.address);

}