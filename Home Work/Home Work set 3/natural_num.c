// C program to check natural number

#include<stdio.h>
int main(void) {
    int num;

    printf("Enter the natural number: \n");
    scanf("%d", &num);

    if(num >=1){
        printf("%d number is a natural number.\n",num);
    }
    else {
        printf("%d number is not a natural number.\n",num);
    }

    return 0;
}
