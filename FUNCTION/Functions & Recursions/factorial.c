// Calculate factorial without using function

#include<stdio.h>
int main() {
    int num, fact = 1;

    printf("Enter the number : \n");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }

    printf("The factorial of num  = %d\n",fact);
    return 0;
}
