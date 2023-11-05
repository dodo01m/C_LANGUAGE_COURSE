#include<stdio.h>
int main() {
    int i, j , n;

    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(j == i || j == n+1-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
