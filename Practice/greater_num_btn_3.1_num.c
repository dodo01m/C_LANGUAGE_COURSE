//Write a C program to find greater number between 3 number.

#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d%d%d",&a, &b, &c);

    if(a > b && a > c) {
        printf("a is the greater number.\n");
    }else
        if(b > c) { // no need to compare with a because if condition is true then no need to check this command
            printf("b is the greater number.\n");
        }
        else if (c > b){
            printf("c is the greater number.\n");
        }
    else {
        printf("a, b and c are same.\n");
    }
    return 0;
}
