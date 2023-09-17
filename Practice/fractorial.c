#include<stdio.h>
int main() {
    long int num, fact = 1;
    long int org_num;
    printf("Enter the number: \n");
    scanf("%ld",&num);
    org_num = num;

    while(num >= 1) {
        fact = fact * num;
        num--;
    }
    printf("Factorial of %ld is %ld\n",org_num,fact);
    return 0;
}
