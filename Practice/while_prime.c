#include<stdio.h>
int main() {
    int num, i;
    printf("enter the number: \n");
    scanf("%d",&num);

    i = 2;
    while(i <= num -1) {
        if(num % i == 0) {
            printf("The number is a Prime number.\n");
            break;
        }
        i++;
    }
    if(i == num) {
        printf("The number is a Prime number.\n");
    }

    return 0;
}
