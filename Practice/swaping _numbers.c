// Write a c program to swap two numbers.

#include<stdio.h>
int main() {
    int a, b, temp;

    //taking two number as input from user

    printf("Enter two numbers that you want to swap: \n");
    scanf("%d%d",&a,&b);
    temp = b;
    b = a;
    a = temp;

    printf("After swaping, the value of a = %d and the value of b = %d\n",a,b);

    return 0;
}
