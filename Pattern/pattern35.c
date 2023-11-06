#include<stdio.h>
int main() {
    int i, j;
    int k;

    for(i = 1; i <= 4; i++) {
        k=1;
        for(j = 1; j <= 7; j++) {
            if(j >= 5-i && j <= 3+i){
                if(k){
                    printf("*");
                }
                else
                    printf(" ");
                k = 1-k;
            }
            else
                printf(" ");
            }

        printf("\n");
    }
    return 0;
}
