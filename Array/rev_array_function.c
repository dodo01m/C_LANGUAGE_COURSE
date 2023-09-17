#include<stdio.h>
void revArr(int *arr, int n);
int main() {
    int arr[5];
    int n = 5;

    printf("Enter the elements of the array : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    revArr(arr, n);

    printf("Reverse array : ");
    for(int i = 0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

    return 0;
}

void revArr(int *arr, int n){
    int rarr[5];
    for(int i = 0; i < n; i++){
        rarr[i] = arr[n - i - 1];
    }

    for(int i = 0; i < n; i++){
        arr[i] = rarr[i];
    }
}
