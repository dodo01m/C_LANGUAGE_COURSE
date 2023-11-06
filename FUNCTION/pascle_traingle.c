#include<stdio.h>
int factorial(int f){
    int fact = 1;
    for(int i = 2; i <= f; i++){
    fact = fact * i;
    }
    return fact;
}

int combination(int i, int j){
    int iCj = factorial(i) / (factorial(j) * factorial(i - j));
    return iCj;
}

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            //printf("*");
            int iCj = combination(i,j);
            printf("%d ",iCj);
        }
        printf("\n");
    }
}
