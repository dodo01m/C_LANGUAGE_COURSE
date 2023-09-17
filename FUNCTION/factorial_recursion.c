#include<stdio.h>
int factorial(int n);
int main() {
    int num, fact;
    printf("Enter the value: \n");
    scanf("%d",&num);

    fact = factorial(num);
    printf("Factorial = %d",fact);
    return 0;
}

int factorial(int num){
    int f;
    if(num == 1)
        return 1;
    else
        f = num * factorial(num -1);
    return(f);
}
