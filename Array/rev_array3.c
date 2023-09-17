//Reverse an array  using iterative method.
#include<stdio.h>
int main() {
    int arr[5];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }

    int rarr[5];
    for(int i = 0; i <5; i++){
        rarr[i] = arr[5 - i - 1];
    }

    for(int i = 0; i < 5; i++){
        arr[i] = rarr[i];
    }

    printf("Reversed array : ");
    for(int i = 0; i < 5; i++){
        printf("%d\t",rarr[i]);
    }
    printf("\n");
    return 0;
}
