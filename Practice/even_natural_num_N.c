#include<stdio.h>
int main() {
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);

    printf("The first %d natural even numbers are: \n");

    for(int i = 1; i <= num; i++){
        printf("%d\t",2 * i);
    }

    return 0;
}
