//Write a C program to find N natural number.
#include<stdio.h>
int main() {
    int num, i = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);

    while(i++ < num){
        printf("%d\t",i);
    }
    printf("\nLoop is being executed %d times.\n",i);

    return 0;
}
