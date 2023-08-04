#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _Person{ //_Person은 구조체 이름 또는 태그라고 부름 struct 뒤에 태그를 안적으면 익명구조체가 됨,
	char name[20];
	int age;
	char address[100];

}Person; //Person은 별칭 또는 타입이름  별칭을 정의할 때는 반드시 typedef를 쓴다.

int main() {


	Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);

}