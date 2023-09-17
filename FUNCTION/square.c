#include<stdio.h>
int square_cal (int x);

int main() {
    int a;
    scanf("%d",&a);
    int sqr;
    sqr = square_cal(a);
    printf("Square of %d is %d\n",a,sqr);
    return 0;
}

int square_cal(int x){
    int b;
    b = x * x;
    return (b);
}
