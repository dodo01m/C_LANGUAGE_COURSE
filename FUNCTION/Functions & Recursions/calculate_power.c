// Write a C program to calculate the value of a raised to b

#include<stdio.h>

int power(float x, int y); // can be writter as int power();

int main() {
    float a, pow;
    int b;
    printf("Enter the value of a and b : \n");
    scanf("%f%d", &a, &b);
    pow = power(a,b);
    printf("%f to the power %d = %f\n",a,b,pow);
    return 0;
}

int power(float x, int y) {
    float pow = 1;
    for(int i = 1; i <= y; i++) {
        pow = pow * x;
    }
    return (pow);
}
