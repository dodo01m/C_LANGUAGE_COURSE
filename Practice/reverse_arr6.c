//Reverse the array using while loop

#include<stdio.h>
int main() {
    int arr[10];
    int n;
    scanf("%d",&n);

    printf("Enter the arr : ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int narr[n];

    // for(int i = 0; i < n; i++){
    //     narr[i] = arr[n-i-1];
    // }

    //using while loop
    int i=0;
    while(i < n){
        narr[i] = arr[n-i-1];
        i++;
    }

    //printing reversed array.
    for(int i = 0; i < n; i++){
        printf("%d\t",narr[i]);
    }

    printf("\n");
    return 0;
}

