// Write a C program to calculate factorial of a number using function

#include<stdio.h>
int fact(int);

int main() {
    int num;
    int factorial;
    printf("Enter the number: \n");
    scanf("%d",&num);

    factorial = fact(num);
    printf("The factorial of %d is = %d\n",num, factorial);
    return 0;
}

int fact(int x){
    int facto = 1;
    for(int i = 1; i <= x; i++){
        facto = facto * i;
    }
    return facto;
}
