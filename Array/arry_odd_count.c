//Write a C program to calculate odd numbers in an array.
#include<stdio.h>
int countOdd(int arr[], int n);
int main() {
    int arr[] = {27,23,28,30,35,36};
    int n;
    scanf("%d",&n);
    printf("%d\n",countOdd(arr,n));
    return 0;
}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
    if(arr[i] % 2 != 0){
        count++;
    }
    }
    return count;
}
