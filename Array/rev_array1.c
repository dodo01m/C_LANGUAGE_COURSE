//Write a C program to reverse array in c by printing it from the last element
#include<stdio.h>
#define N 100
int main(){
    int arr[N];
    int n; // size of the array
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    //Taking the elements of the arry from the user.
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //printing the reverse of the array from last element.
    printf("Reverse array: ");
    for(int i = n - 1; i >= 0; i--){
            printf("%d\t",arr[i]);
        }
    printf("\n");
    return 0;
}
