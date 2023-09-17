#include<stdio.h>
int main() {
    int a, b, c, k;
    printf("Enter the value of a, b and c: \n");
    scanf("%d%d%d",&a,&b,&c);

    k = a > b ? a > c ? a : c : b > c ? b : c;

    printf("The greater number is %d\n",k);

    //    printf("The greater number is %d\n",a > b ? a > c ? a : c : b > c ? b : c;);

    return 0;

    }
