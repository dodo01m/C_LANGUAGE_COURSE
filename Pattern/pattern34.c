#include<stdio.h>
int main() {
    int i, j, row, p, k=1;

    printf("Number of rows: ");
    scanf("%d",&row);


    for(i = 1; i <= row; i++) {
        p=k;
        for(j = 1; j <= i; j++) {
            printf("%d",p);
            p=p-(row-i+j);
        }
        k = k+1+row-i;
        printf("\n");
    }
    return 0;
}
