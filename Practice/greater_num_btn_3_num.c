// Write a C program to find greater number between 3 numbers.

#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the values of a, b and c: \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a > b && a > c){
        printf("a is greater numbe.\n");
    }
    else
        if(b > a && b > c){
            printf("b is greater number.\n");
        }
    else
        if(c > a && c > b){
            printf("c is greater number.\n");
        }
    else {
        printf("a, b and c are equal.\n");
    }

    return 0;
}
