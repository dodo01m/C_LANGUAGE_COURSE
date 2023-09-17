#include<stdio.h>
int main() {
    int arr[6] = {1,2,3,4,5};
    scanf("%d",&arr[6-1]);
    printf("The array is: \n");
    for(int i = 0; i < 6; i++){
        printf("%d\t",arr[i]);
    } 
    printf("\n");
    return 0;
}