#include<stdio.h>
int main() {
    int year;
    printf("Enter the yerar: \n");
    scanf("%d",&year);

    if(year % 100 == 0 && year % 400 == 0) {
        printf("The year is a leap year.\n");
    }
    else if(year % 4 == 0){
        printf("The year is a leap year.\n");
    }
    else {
        printf("The year is not a leap year.\n");
    }

    return 0;
}
