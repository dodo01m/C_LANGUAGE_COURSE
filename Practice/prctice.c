#include<stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,3};
    int x = 3;
    int n = 6;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            count++;
        }
    }
    printf("%d is present %d times.\n",x,count);
    return 0;
}
