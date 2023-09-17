// Write a c program to calculate factorial of a number.

#include<stdio.h>
int main() {
    int num, factorial = 1, org_num;
    printf("Enter the number : ");
    scanf("%d",&num);
    org_num = num;

    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
    }
    printf("The factroial of %d is %d\n",org_num, factorial);

    return 0;
}