#include<stdio.h>
int main() {
    int i , j;
    char k;
    for(i = 1; i <= 4; i++){
        k = 64+i;
        for(j = 1; j <= 4; j++){
            if(j<=i){
                printf("%c",k);
            k--;
        }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
