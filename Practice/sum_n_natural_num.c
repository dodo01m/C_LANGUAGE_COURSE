#include<stdio.h>
int main() {
    int num, sum = 0;
    int i;

    printf("Enter the value od num:\n");
    scanf("%d",&num);

    for(i = 1; i <= num; i++){
        sum = sum + i;
    }
    printf("sum = %d\n",sum);

    return 0;
}
