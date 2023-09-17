#include<stdio.h>
int main() {
    int arr[] = {2, 4, 5, 9, 2, 41};
    int n = 6;
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d is the greatest number in the array.\n", max);

    return 0;

}