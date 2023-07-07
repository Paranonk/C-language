#include <stdio.h>

int main()
{
	
	char* sPtr; // 문자열 포인터
	sPtr = "My name";
	char s2[10] = "Hello"; //문자배열

	printf("%s\n", sPtr);
	printf("%s\n", s2);


	//문자열 포인터와 문자배열의 가장 큰 차이점 
	//문자배열은 선언과 동시에 할당. 문자열 포인터는 상관없음.
	//문자열 포인터는 읽기 전용이다. 쓰기가 안됨 할당후 변경이 안됨 하지만 문자배열은 문자열을 복사한 것이여서 인덱스를 접근하여 변경 가능
	/*
		sPtr[0] ='a'; //오류
		s2[0] = 'a'; //정상 작동

	*/
}