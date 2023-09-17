#include<stdio.h>
int main() {
    int a = 3, b = 4, temp;
    temp = 4;
    b = a;
    a = temp;

    printf("The exchanged value of a is = %d and b = %d\n",a,b);
    return 0;
}