#include<stdio.h>
int main() {
    int a = 3;
    float b = 4.4;
    char poco = 'g';

    int * ptra = &a;
    float * ptrb = &b;
    char * ptrc = &poco;



    printf("%d\n%f\n%c\n",a,b, poco);
    printf("%p\n%p\n%p\n",ptra, ptrb, ptrc);
    printf("%u\n%u\n%u\n",&a, ptrb, &ptrc);
    printf("%d\n%f\n%c\n",*&a, *ptrb, *ptrc);

    return 0;
}
