#include<stdio.h>
int main() {
    int i, j;
    char alpha;

    for(i = 1; i <= 5; i++) {
        alpha = 'A';
        for(j = 1; j <= 7; j++) {
            if(j <= 5 - i || j >= 3 + i) {
                printf("%c",alpha);
            }
            else
                printf(" ");
             alpha++;
        }
        printf("\n");
    }
    return 0;
}
