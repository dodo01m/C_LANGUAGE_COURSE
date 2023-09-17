// Write a c peogram to calculate a number is armstrong number or not.

//for N digit number

#include<stdio.h>
#include<math.h>

int main() {
    int i = 0, num, org_num, remainder;
    int result = 0, original_num;

    printf("Enter 3 digit  number: \n");
    scanf("%d",&num);
    org_num = num;
    original_num = num;


    // for loop to calculate number of digit

    for(org_num; org_num > 0;++i) {
       // remainder = num % 10;

        org_num = org_num / 10;
         //i++;
    }

    printf("The number of digit %d\n",i);


    for(num; num > 0; num /=10) {
        remainder = num % 10;
        //result = result + (remainder * remainder * remainder);

        result = result + pow(remainder,i);
    }

    printf("The result number is %d\n",result);

    if(original_num == result) {
        printf("The %d number is an Armstrong number.\n",original_num);
    }
    else {
        printf("The %d number is not an Armstrong number\n",original_num);
    }

    return 0;
}
