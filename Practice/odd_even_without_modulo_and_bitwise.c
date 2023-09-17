#include<stdio.h>
int main() {
    int x;
    printf("Enter the number: \n");
    scanf("%d",&x);

    if((x / 2) * 2 == x){
        printf("Even number\n");
    }
    else {
        printf("Odd number.\n");
    }

}
