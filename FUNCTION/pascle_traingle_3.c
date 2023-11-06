#include<stdio.h>

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        int first = 1;
        //printf("%d ",first);
        for(int j = 0; j <= i; j++){
            printf("%d ",first);
            first = first * (i - j) / (j +1); //iC(j+1)

        }
        printf("\n");
    }
}
