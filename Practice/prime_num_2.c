#include<stdio.h>
int main() {
    int num, i, indicator = 0;
    printf("Enter the number: ");
    scanf("%d",&num);

    // num > 1

    for(i = 2; i <= num / 2; i++){
        if(num % i == 0) {
            indicator = 1;
            break;
        }
    }
    if(indicator == 0) {
        printf("The number is a Prime number.\n");
    }
    else {
        printf("The number is not a Prime number.\n");
    }

    return 0;

}
