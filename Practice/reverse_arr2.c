#include<stdio.h>
int main() {
    int arr[10];
    int *ptr;
    printf("Enter the arrar: ");
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }

    ptr = &arr[10-1];

    printf("The reversed array is : ");
    for(int i = 0; i < 10; i++){
        printf("%d\t",*ptr--);
    }

    printf("\n");

    return 0;
}
