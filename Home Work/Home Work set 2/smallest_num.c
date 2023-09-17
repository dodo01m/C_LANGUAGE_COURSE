//Write a C program to print the smallest number of two

#include<stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) {
        printf("%d is smallest.\n",b);
    }
    else if(a < b) {
        printf("%d is smallest.\n",a);
    }
    else {
        printf("both number is same.\n");
    }

    return 0;
}