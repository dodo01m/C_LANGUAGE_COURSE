#include<stdio.h>
int main() {
    int arr[10] = {20, 30 , 40 ,50, 60};
    int *ptr = &arr[0];
    printf("%d\n",ptr[0]);
    printf("%p\n",&ptr);

    return 0;
}
