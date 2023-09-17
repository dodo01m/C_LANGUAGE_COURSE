#include<stdio.h>
int main() {
    int n;
    int arr[10];

    printf("Enter the size of array : ");
    scanf("%d",&n);

    //array print
    printf("Enter the array : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int narr[n];
    for(int i = 0; i < n; i++){
        narr[i] = arr[n-i-1];
    }

    //The reverse array
    printf("The reverse array is : ");
    for(int i = 0; i < n; i++){
        printf("%d\t",narr[i]);
    }

    return 0;
}
