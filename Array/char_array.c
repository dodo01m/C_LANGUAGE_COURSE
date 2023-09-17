#include<stdio.h>
int main() {
   // char name[] = {'M', 'A', 'N', 'O', 'J'};
    char name[] = "MANOJ";
    printf("Character array is :\n");
    for(int i = 0; i < 5; i++) {
        printf("%c",name[i]);
    }
    printf("\n");

    return 0;
}
