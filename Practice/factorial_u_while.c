#include<stdio.h>
int main() {
    int num, i = 0, fact = 1;
    printf("Enter the number: \n");
    scanf("%d",&num);

    while(++i <= num) {
        fact = fact * i;
    }
    printf("The factorial of %d is %d\n",num,fact);

    return 0;
    }

