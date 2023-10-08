#include<stdio.h>
int stair(int n);

int main() {
    int n;
    printf("Enter the numbe : ");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}

int stair(int n){
    // if(n==1) return 1;
    // if(n==2) return 2;
    if(n<=3) return n;
    int totalWays = stair(n-1) + stair(n-2) + stair(n-3);
    return totalWays;
}
