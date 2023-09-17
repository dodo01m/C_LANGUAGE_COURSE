#include<stdio.h>
int main() {
    int num;
    long int fact = 1;

    scanf("%d",&num);

    while(num >= 1){
        fact = fact * num;
        num--;
    }
    printf("The factorial is %ld\n",fact);
    return 0;
}
