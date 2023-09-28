#include<stdio.h>
int main() {
    int num1, num2, max;
    printf("Enter two positive integers : ");
    scanf("%d%d",&num1, &num2);

    if(num1 > num2){
        max = num1;
    }
    else max = num2;
    int lmc = max;
    while(1){
        if(lmc % num1 == 0 && lmc % num2 == 0){
            break;
        }
        lmc += max;
    }
    printf("LMC = %d\n",lmc);
    return 0;
}
