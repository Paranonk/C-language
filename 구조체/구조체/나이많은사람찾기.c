#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main()
{
    struct Person* p[5];
    int oldest = 0,oldestIndex;
    for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++) {
        p[i] = malloc(sizeof(struct Person));
        scanf("%s %d", &p[i]->name, &p[i]->age);

        if (p[i]->age > oldest) {
            oldest = p[i]->age;
            oldestIndex = i;
        }
    }


    
  
   



    printf("%s", p[oldestIndex]);
        for (int i = 0; i < sizeof(p) / sizeof(struct Person*); i++)
        {
            free(p[i]);
        }

    return 0;
}