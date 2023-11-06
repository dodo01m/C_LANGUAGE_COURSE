#include<stdio.h>
int add(int, int);
int main() {
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    int SUM;
    SUM = add(a,b);
    printf("The addition of a and b = %d\n",SUM);
    return 0;
}

int add(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}
