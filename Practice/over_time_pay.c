// Write a C program to calculate over time pay Rs.12.00 hourly above 40 hours

#include<stdio.h>
int main() {
    int i = 1 , hour;
    float otpay;

    while( i < 11) {
        printf("Enter no of hours worked: ");
        scanf("%d",&hour);

        if(hour >= 40){
            otpay = (hour - 40) * 12;
        }else {
            otpay = 0;
        }
        printf("Hours = %d Oveertime pay = %f\n",hour, otpay);
        i++;
    }
    printf("i = %d",i);

    return 0;

}
