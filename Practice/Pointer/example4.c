#include<stdio.h>
int main() {
    int price = 10000;
    int *ptr = &price;
    int **pptr = &ptr;

    //Addres print
    printf("%p\n",&price);
    printf("%p\n",ptr);
    printf("%p\n",pptr);

    //Value print in the address
    printf("%d\n",price);
    printf("%d\n",*ptr);
    printf("%d\n",**pptr);
    printf("%d\n",*(&price));

    return 0;
}
