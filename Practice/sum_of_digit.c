//Write a function to find sum of digits of a number

#include<stdio.h>
int sum(int num) {
    int r, sum = 0;
    for(num ; num > 0;) {
        r = (num % 10);
        sum = sum + r;
        num = num / 10;
    }
    return sum;
}

int main() {
    int num;
    scanf("%d",&num);
    printf("Sum = %d\n",sum(num));
    return 0;
}
