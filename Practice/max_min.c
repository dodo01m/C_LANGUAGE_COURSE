#include<stdio.h>
int main() {
    int a, b;
    scanf("%d%d",&a,&b);

    int *ptr, *ptr2;
    ptr = &a;
    ptr2 = &b;

    if(*ptr > *ptr2) {
        printf("a is maxnumber\n");
    }
    else if(*ptr < *ptr2) {
        printf("b is greater number\n");
    }
    else
        printf("Both a and b are equal\n");
    return 0;
}
