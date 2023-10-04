#include<stdio.h>
int fact(int);

int main() {
    int num;
    int f;
    printf("Enter the number : ");
    scanf("%d",&num);
    f = fact(num);
    printf("Factorial = %d\n",f);
    return 0;
}

int fact(int n) {
    if(n == 1 || n == 0) return 1;
    return n * fact(n - 1);
}
