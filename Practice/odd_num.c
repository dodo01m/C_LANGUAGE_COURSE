// Write a C program to keep taking numbers as input from user until user enters an odd number.

#include<stdio.h>
int main() {
    for(int i = 0; ; ) {
        scanf("%d",&i);
        if(i % 2 != 0){
             printf("The odd number is %d\n",i);
            break;
        }
        printf("The entered number is %d\n",i);
    }
    return 0;
}