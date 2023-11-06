#include<stdio.h>
int factorial(int f){
    int fact = 1;
    for(int i = 2; i <= f; i++){
    fact = fact * i;
    }
    return fact;
}

int combination(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n -r));
}

int main() {
    int n, r;
    printf("Enter the value of n and r : ");
    scanf("%d%d",&n,&r);
    float nCr = combination(n,r);
    printf("nCr = %.2f\n",nCr);
    return 0;
}
