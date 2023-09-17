//Write a C program to check if a given nmumber is Armstrong number or not.

#include<stdio.h>
int main() {
    int num; // num is a three digit number
    int original_num, remainder, result = 0;

    //taking input from the user
    printf("Enter three-digit number : \n");
    scanf("%d",&num);

    //condition checking
    for(original_num = num; num != 0; num/=10){
        remainder = num % 10;
        result = result + ( remainder * remainder * remainder);
    }

    if(original_num == result) {
        printf("%d is an Armstrong number.\n",original_num);
    }
    else {
        printf("%d is not an Armstrong number.\n",original_num);

    }

    return 0;


}