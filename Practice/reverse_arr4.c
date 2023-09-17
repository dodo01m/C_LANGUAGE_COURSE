#include<stdio.h>
int main() {
    int arr[10];
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("Enter the array : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    //Take a new array to store the array in reverse order

    int narr[10];

    for(int i = 0; i < n; i++){
        narr[i] = arr[n - i -1];
    }

    //put the new array value into the old array

    for(int i = 0; i < n; i++) {
        arr[i] = narr[i];
    }

    //Print the array

    printf("The reversed array is : ");
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }

    printf("\n"); // for next line
    return 0;
}
