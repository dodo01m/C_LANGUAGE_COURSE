// Write a c peogram to calculate a number is armstrong number or not.

//for 3 digit number

#include<stdio.h>
int main() {
    int num, org_num, remainder, result = 0;

    printf("Enter 3 digit  number: \n");
    scanf("%d",&num);
    org_num = num;

    for(num; num > 0; num /=10) {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);

        // result = result + pow(remainder,3);
    }

    printf("The result number is %d\n");

    if(org_num == result) {
        printf("The %d number is an Armstrong number.\n",org_num);
    }
    else {
        printf("The %d number is not an Armstrong number\n",org_num);
    }

    return 0;
}
