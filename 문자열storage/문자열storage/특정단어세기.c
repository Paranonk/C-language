#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

    char s1[1001];
    int num = 0;
    scanf("%[^\n]s", s1);

    char* ptr = strtok(s1, " .,");

    while (ptr != NULL) {
      
        if(ptr !=NULL && strcmp(ptr, "the") == 0)
            num++;
            ptr = strtok(NULL, " .,");


    }

    printf("%d", num);
}