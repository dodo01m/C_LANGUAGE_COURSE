#include<stdio.h>
void square(int n);
void _square(int *n);

int main() {
    int num;
    scanf("%d",&num);
    square(num);
    printf("number = %d\n",num);

    _square(&num);

        printf("number = %d\n",num);

    return 0;
}

void square(int n) {
    int sqr = n * n;
    printf("Square = %d\n",sqr);
}

void _square(int *n) {
    int square = *n * *n;
    printf("square = %d\n",square);
}
