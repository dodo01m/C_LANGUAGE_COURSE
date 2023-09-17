#include<stdio.h>
int main() {
    int arr[10], n, etc;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element that you want to insert: ");
    scanf("%d",&etc);
    n++;
    arr[n - 1] = etc;
    printf("Array elements are : \n");
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
