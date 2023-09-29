#include "stdio.h"
#include "interest.h"

int main() {
    float p, n, r, si; // p = primary amount, n = time, r = rate
    printf("Enter the value of p, n and r : ");
    scanf("%f%f%f",&p,&n,&r);

    si = SI(p,n,r);
    printf("Simple interest = %f\n",si);
    float tot_amount;
    tot_amount = AMOUNT(p, si);
    printf("Amount = %f\n",tot_amount);
    return 0;
}
