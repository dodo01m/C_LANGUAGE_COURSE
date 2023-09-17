// C program to calculate sum using sum

#include<stdio.h>

int calsum();


int main() {
    int a, b, c, sum;
    printf("Enter three Numbers :  \n");
    scanf("%d%d%d",&a,&b,&c);

    sum = calsum(a,b,c);
    printf("The sum of a, b and c is = %d\n",sum);
    return 0;
}

int calsum(int a, int b, int c) {
    int result;
    result = a + b + c;
    return;
}
