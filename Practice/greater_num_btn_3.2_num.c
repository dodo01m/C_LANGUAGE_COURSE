#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the numbers: \n");
    scanf("%d%d%d",&a, &b, &c);

    if(a > b) {
        if(a > c)
            printf("a is the greater number.\n");
        else
            printf("c is the greater number.\n");
    }
    else{
        if(b > c)
            printf("b is the greater number.\n");
        else
            printf("c is the greater number.\n");
    }

    return 0;

}
