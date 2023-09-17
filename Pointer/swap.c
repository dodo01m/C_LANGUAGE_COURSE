#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 4, b = 5;

    swap(&a, &b);
    printf("x = %d,b = %d\n",a,b);
}
