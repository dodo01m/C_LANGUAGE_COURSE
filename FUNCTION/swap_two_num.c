#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // printf("a = %d\n",a);
    // printf("b = %d\n",b);
    return;
}

int main() {
    int a, b, t;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b); // a = 4, b = 9

    // without using third variable
    // a = a + b; // a = 13
    // b = a - b;
    // a = a - b;

    // //Using third variable
    // t = a;
    // a = b;
    // b = t;
    // printf("%d %d\n",a,b);

    int *x = &a;
    int *y = &b;

    swap(x,y);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}

