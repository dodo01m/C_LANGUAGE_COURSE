#include<stdio.h>
int main() {
    float x, y, power = 1;

    printf("Enter the two numbers: \n");
    scanf("%f%f",&x,&y);
    int i = y;

    //we have to calculate power = x^y

    while(y >= 1) {
        power = power * x;
        y--;
    }

    printf("%f to the power %d is = %f\n",x,i,power);
    return 0;
}
