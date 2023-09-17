// Write a c progam to check a number is armstrong mnumber or not

#include<stdio.h>
int main() {
    int num;
    int original_num, result = 0;
    int digit_1, digit_2, digit_3;
    scanf("%d",&num);
    original_num = num;
    digit_1 = num % 10;
    num = num / 10;
    digit_2 = num % 10;
    num = num / 10;
    digit_3 = num % 10;

    result = (digit_3 * digit_3 * digit_3) + (digit_1 * digit_1 * digit_1) + (digit_2 * digit_2 * digit_2); 
    if(original_num == result) {
        printf("The %d number is Armstrong number\n",original_num);
    }
    else {
        printf("The %d number is not Armstrong number\n",original_num);
    }

    return 0;
}