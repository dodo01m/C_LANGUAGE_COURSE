#include<stdio.h>
long factorial(int num);
int main() {
    int num, fact;
    scanf("%d",&num);
    fact = factorial(num);

    printf("Factorial = %d",fact);
    return 0;
}

long factorial(int num) {
    if(num > 0){
        return(num * factorial(num -1));
    }
    else{
        return 1;
    }
}
