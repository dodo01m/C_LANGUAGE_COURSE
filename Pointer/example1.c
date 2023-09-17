#include<stdio.h>
int main() {
    int a = 23;
    int * ptr = &a;
    int _age = *ptr;
    int age = ptr;

    printf("%d\n",ptr);
    printf("%d\n",_age);
    printf("%d\n",age);
    return 0;
}
