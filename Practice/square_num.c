// Write a C program to calculate square of a number.

#include<stdio.h>

// Function decleration
void square(int num){
    int square = 1;
    square = num * num;
    printf("The square of the number = %d\n",square);
}

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    square(num);
    return 0;
}
