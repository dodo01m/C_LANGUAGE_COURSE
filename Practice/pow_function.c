// Write a C program to create own pow function

#include<stdio.h>
int powr(int num, int num2) {
    int pw = 1;
    for(int i = 1; i <=  num2; i++){
        pw = pw * num;
    }
    return pw;
}

int main() {
    int a, b;
    scanf("%d %d",&a, &b);
    printf("%d to the power %d = %d\n",a,b,powr(a,b));
    return 0;
}
