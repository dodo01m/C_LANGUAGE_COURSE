//In an array of numbers, find how many times does  a number 'x' occurs
#include<stdio.h>
int main(){
    int arr[] = {2, 4, 5, 2, 41,9};
    int n = 6;
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        if(arr[i] == arr[j]){
            count++;
        }
        }
        if (count > 0) {
            printf("Number %d occurs %d times\n", arr[i], count);
            // Reset the count for this element to avoid counting it again
            count = 0;
        }
    }
    //printf("%d\n",count);
    return 0;

}