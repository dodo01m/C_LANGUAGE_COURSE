// Write a C program to check whether a number is even or odd without using % operator.

// we have to use & operator if(x&1)odd else even

#include<stdio.h>
int main() {
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);

    if(x&1){
        printf("The number is odd number.\n");
    }else {
        printf("The number is even number.\n");
    }

    return 0;
}
