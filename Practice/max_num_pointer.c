//Write a c program to print maximum number between two number.

#include<stdio.h>
int main() {
    int a, b;
    int *ptr, *ptr2;

    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    ptr = &a;
    ptr2 = &b;

    //Checking maximum number.
    if(*ptr == *ptr2){
        printf("Both are equal.\n");
    }
    else if(*ptr > *ptr2){
        printf("%d is maximum number.\n",*ptr);
    }
    else {
        printf("%d is maximum number.\n",*ptr);
    }

    return 0;
}
