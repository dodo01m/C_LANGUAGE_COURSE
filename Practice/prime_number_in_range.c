#include<stdio.h>
int main() {
    int i, x, l, u; // i,x,l and u are the variables and l is the 1st number and u is the last number.

    printf("Enter the two numbers: \n");
    scanf("%d%d",&l,&u);

    //checking for outer loop
    for(x = l + 1; x <= u - 1; x++) {
        for(i = 2; i <= x - 1; i++) {
            if(x % i == 0) {
                break;
            }
        }
        if(i == x) {
            printf("%d\t",i);
        }
    }
    return 0;
}
