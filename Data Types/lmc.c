#include<stdio.h>
int main() {
    int a, b;
    int max, lmc;
    printf("Enter two positive integer : ");
    scanf("%d%d",&a,&b);
    if(a > b){
        max = a;
    }
    else
        max = b;
    for(lmc = max; ; lmc += max){
    if(lmc % a == 0 && lmc % b == 0){
      //  lmc = max;
        break;

    }

    }

    printf("LMC = %d\n",lmc);
    return 0;
    }
