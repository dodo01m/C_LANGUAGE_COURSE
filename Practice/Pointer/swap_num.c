#include<stdio.h>
void swap_num(int *, int *);
int main() {
    int a, b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    swap_num(&a,&b);
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
void swap_num(int *x, int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
