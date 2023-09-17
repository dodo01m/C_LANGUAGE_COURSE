#include<stdio.h>
int main() {
    int num;
    long int product = 1;
    scanf("%d",&num);

    for(int i = 1; i <= num; i++){
        product = product * i;
    }

    printf("product = %ld",product);
    return 0;
}
