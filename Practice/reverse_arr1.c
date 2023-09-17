#include<stdio.h>
int main() {
    int arr[100];

    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    //Enter the array.
    printf("Enter the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    //The reverse array is:
    printf("The reverse array is : ");
    for(int i = n-1; i>=0; i--){
        printf("%d\t",arr[i]);
    }

    printf("\n");

    return 0;
}
