//Write a C program to calculate factorial of a number using recursion

#include<stdio.h>

int factorial(int x); // Function prototype

int main() {
    int num, fact;

    printf("Enter the number: \n");
    scanf("%d",&num);
    fact = factorial(num); // Function call

    //output
    printf("The factorial of %d is = %d.\n",num, fact);
    return 0;

}

int factoril(int a){
    if(a == 0){
        return 1;
    }
    else{
    int factnml = factorial(a - 1);
    int facto = factnml * a;
    return factnml;
    }
}
