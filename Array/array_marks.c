#include<stdio.h>
int main() {
    int marks[3];

    printf("Enter the value of array: ");

    for(int i = 0; i < 3; i++){
        scanf("%d",&marks[i]);
    }
    printf("The array is : \n");

    for(int i = 0; i < 3; i++) {
    printf("%d\n",marks[i]);
    }
    return 0;
}
