#include<stdio.h>
int factorial(int f){
    int fact = 1;
    for(int i = 2; i <= f; i++){
    fact = fact * i;
    }
    return fact;
}

int combination(int n, int r){
    int iCj = factorial(n) / (factorial(r) * factorial(n -r));
    return iCj;
}

int main() {
    int n;
    int k;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        k = 1;
        for(int j = 1; j <= i; j++){
            if(j >= 5-i && j <= 3+i){
            if(k) {
                int iCj = combination(i,j);
                //printf("%d ",iCj);
                printf("*");
            }
            else
                printf(" ");
            k= 1 -k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
