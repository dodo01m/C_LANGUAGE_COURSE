#include<stdio.h>

void fun();

int main() {
    int a = 30;
    fun(a);
    printf("a = %d\n",a);
    return 0;
}

void fun(int b) {
    b = 90;
    printf("b = %d\n",b);
}
