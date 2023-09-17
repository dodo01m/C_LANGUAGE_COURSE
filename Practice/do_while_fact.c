// Write a c program to calculate factorial of a number using do_while loop

#include<stdio.h>
int main() {
    int num, org_num;
    long int fact = 1;

    printf("Enter the number: ");
    scanf("%d",&num);

    org_num = num;

    //do while loop to calculate factorial of a number.

    do{
        fact = fact * num;
        num = num - 1;
    }while(num >= 1);

    printf("The factoril of %d is %ld\n",org_num, fact);

    //return 0;

}
