#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    char s1[1001];
    int num = 0;
    scanf("%[^\n]s", s1);

    char* ptr = strchr(s1, ' ');
    while (ptr != NULL) {
      
            num++;

            ptr = strchr(ptr + 1, ' ');

    }

    printf("%d", num);

}