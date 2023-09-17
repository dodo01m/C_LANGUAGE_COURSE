//Reverse an array using pointers.

#include<stdio.h>
int main() {
    int arr[5];
    int n = 5;
    printf("Enter the elements of the array: ");\
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int *ptr = &arr[n - 1];

    printf("Reversed array : ");
    for(int i = 0; i < n; i++){
        printf("%d\t",*ptr--);
    }
    return 0;
}
