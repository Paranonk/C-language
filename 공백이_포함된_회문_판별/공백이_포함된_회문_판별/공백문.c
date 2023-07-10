#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main() {


    char text[31];
    bool istext = true;
    scanf("%[^\n]", text);
   
    int length = strlen(text);
    for (int i = 0, j = length - 1; i < j; i++,j--) {
        while(text[i] == ' ')
        {
            i++;
        }

        while (text[j] == ' ')
        {   
            j--;
        }
        if (i > j|| text[i]!=text[j]) {
            istext = false;
            break;

        }


    }

    printf("%d", istext);
}