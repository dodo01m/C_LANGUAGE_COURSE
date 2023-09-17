#include<stdio.h>
int sum(int num);

int main() {
    int num;
    scanf("%d",&num);
    printf("Sum = %d\n",sum(num));
    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }

    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
