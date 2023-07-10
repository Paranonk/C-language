#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



int main() {


    char text[11];
    int length;
    int size;
    scanf("%d %s", &size, text);

    length = strlen(text);

    if (length < size)
    {
        printf("wrong\n");
    }
    else

    for (int i = 0; i < length - (size - 1); i++) {
        for (int j = 0; j < size; j++) {

            printf("%c", text[i+j]);
        }
        printf("\n");
    }

}