#include<stdio.h>
#define ONE 1;
int globalOne;


main() {
    int localOne, sum = 0;
    localOne = ONE;
    sum = globalOne + localOne;

    string alarm;
    alarm = "\aThis text starts with a beep\nand covers two lines";
    printf("%s",alarm);
    printf("The sum of globalOne and localOne = %d\n",sum);
    return 0;
}