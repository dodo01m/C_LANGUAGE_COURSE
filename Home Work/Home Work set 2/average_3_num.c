//Write a c program to claculate average of 3 number.

#include<stdio.h>
int main(void) {
    int a, b, c; // a, b and c are the integer numbers

    //taking input from the user
    printf("Enter the value of the three numbers : \n");
    scanf("%d %d %d",&a, &b ,&c);

    //calculating average and display output
    printf("Average of three number = %d\n",(a + b + c) / 3);
    return 0;
    

}