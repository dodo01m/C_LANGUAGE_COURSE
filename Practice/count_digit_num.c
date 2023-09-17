// Write a C program to count digit in a given number.

#include<stdio.h>
int main(){
    int num, remainder, count = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);

    for(int i = 1; num != 0; i++){
        //remainder = num % 10;
        num = num / 10;
        ++count;
    }
    printf("The number of digit: %d\n",count);

    return 0;
}
