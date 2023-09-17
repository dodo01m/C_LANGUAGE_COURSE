//Write a C program to calculate perimeter of rectangle.

#include<stdio.h>
int main(void) {
    int a, b, perimeter; // a and b are the sides of the rectangle

    //taking input from user
    printf("Enter the sides of the rectangle : \n");
    scanf("%d %d", &a, &b);

    //calculate perimeter
    perimeter = a + b;
    
    //output 
    printf("Perimeter of the rectangle is = %d\n",perimeter);
    return 0;
} 