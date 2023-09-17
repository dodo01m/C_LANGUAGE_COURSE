#include<stdio.h>
int main() {
    int arr[] = {2, 4, 5, 9, 2, 41};
    int n = 6;
    int count = 0;
    int x = 2;
    for(int i = 0; i < n; i++){
        if(arr[i] == x) {
            count++;
        }
    }
    printf("Number %d occurs %d times in the array.\n",x,count);
    return 0;

}