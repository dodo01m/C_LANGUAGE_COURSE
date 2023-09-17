//Reverse the array using function

#include<stdio.h>
void RevArr(int arr[], int n);

int main() {
    int arr[10];
    int n;

    printf("Enter the size of the array : ");
    scanf("%d",&n);

    //Enter the array.
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    RevArr(arr, n);

    //Reversed array print.

    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }

    printf("\n");
    return 0;
}

void RevArr(int arr[], int n){
    int narr[n];

    for(int i = 0; i < n; i++){
        narr[i] = arr[n - i - 1];
    }

    //coping the new array value to
    for(int i  = 0; i < n; i++){
        arr[i] = narr[i];
    }
}
