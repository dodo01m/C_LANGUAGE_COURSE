#include<stdio.h>
int main() {
    int arr[5] = { 23, 43, 9, 10, 32};
    int *ptr = &arr;
    printf("Array elements using pointer to an array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    return 0;
}
