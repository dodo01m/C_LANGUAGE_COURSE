// Write a C program to swap two number without 3rd variable.

#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    b = b + a;
    a = b - a;
    b = b - a;

    printf("After swap, a = %d and b = %d\n",a,b);

    return 0;

}
