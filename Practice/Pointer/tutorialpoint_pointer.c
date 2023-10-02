#include<stdio.h>
int main() {
    int a = 50;
    int *ptr; // * is known as indirection operator
    ptr = &a;
    printf("Address of p variable is %x\n",ptr);
    printf("Address of p is %p\n",&ptr);
    printf("Address of p is %u\n",&ptr);
    printf("The value of a = %d\n",a);
    printf("The value of a = %i\n",*ptr);
    printf("The value of a = %d\n",*(&a));
    printf("The value of p variable %d \n",*ptr);
    printf("%d\n",*(&ptr));
    return 0;
}
