// Write a C program to find greater between two number.

#include<stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    if(a > b){
        printf("a is  gragter number.\n");
    }else
        if(a < b) {
            printf("b is greater number.\n");
        }
    else {
        printf("a and b are same.\n");
    }

    return 0;

}
