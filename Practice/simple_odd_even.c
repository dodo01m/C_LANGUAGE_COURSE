#include<stdio.h>
int main() {
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);

    if(num % 2== 0){
    printf("The number is even number.\n");
    } else {
        printf("The number is odd number.\n");
    }

    return 0;

}
