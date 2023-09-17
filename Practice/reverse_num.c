#include<stdio.h>
int main() {
    int num, remainder;
    int reverse = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);

    while(num != 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("Reverse of the number: %d\n",reverse);

    return 0;
}
