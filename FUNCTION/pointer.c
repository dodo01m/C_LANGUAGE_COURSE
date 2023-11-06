#include<stdio.h>
int main() {
    int a = 5;

    int *p = &a;
    int **pt = &p;

    printf("%p\n",&a);
    printf("%p\n",&p);
    printf("%p\n",*pt);
    printf("%d\n",**pt);
    return 0;
}
