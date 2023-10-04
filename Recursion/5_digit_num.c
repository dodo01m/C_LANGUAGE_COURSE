//Write a c program to calculate sum of digits of 5 digits number using functions
#include<stdio.h>
void sum(int x);

int main() {
    int a;
    printf("Enter 5 digits number : ");
    scanf("%d",&a);
    if(a > 1000 && a < 99999){

        sum(a);
    }
    else {
        printf("Please enter valid 5 digits number.\n");
    }
    return 0;
}
void sum (int x) {
    int sum = 0;
    // for (x; x > 0; ){
    //     sum = sum + (x % 10);
    //     x = x / 10;
    // }

    //using while loop
    while(x > 0){
        sum = sum + (x % 10);
        x = x / 10;
    }
    printf("Sum = %d\n",sum);
}

