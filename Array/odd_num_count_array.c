#include<stdio.h>
int countOdd(int arr[], int n);
int main() {
    int arr[] = {23, 45, 21, 22, 9};
    printf("%d\n",countOdd(arr,5));
    return 0;
}
int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}
