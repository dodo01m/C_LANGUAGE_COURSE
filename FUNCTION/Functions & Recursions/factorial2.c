// Calculate factorial without using function

#include<stdio.h>

int factorial(int num) {
    int fact = 1;
      for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}
int main() {
    int num, fact;

    printf("Enter the number : \n");
    scanf("%d", &num);

    fact = factorial(num);
    printf("The factorial of num  = %d\n",fact);
    return 0;
}
