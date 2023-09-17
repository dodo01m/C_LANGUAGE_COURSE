#include<stdio.h>
int main() {
    int i = 1, x;
    while(i <= 5) {
        printf("Enter a number\n");
        scanf("%d",&x);
        if(x > 0)
            break;
        i++;
    }
    i == 6?printf("Loop ends normally.\n"):printf("Loops end using break.\n");
    printf("%d",i);
    return 0;
}
