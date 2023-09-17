#include<stdio.h>
int main( ) {
    for(int i = 0; i <= 5; i++) {
        if(i == 3) {
            break;
        }
        printf("%d\n",i);
    }
    printf("Exit\n");
    return 0;
}