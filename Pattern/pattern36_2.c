#include<stdio.h>
int main() {
    int i, p, j;
    int k=1, row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);

    for(i = 1; i <= 5; i++) {
        p=k;
        for(j = 1; j <= 5; j++) {
            if(j <= i) {
                printf("%d ",p);
                p=p-(row-i+j);
                }
        }
        k=k+1+row-i;
        printf("\n");
    }
    return 0;
}
