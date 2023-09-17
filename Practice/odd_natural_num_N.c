// print N odd natural numbers

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    printf("N natural odd numbers are: \n");
    for(int i = 1; i <= num; i++){
        printf("%d\t",2 * i - 1);
    }
    return 0;
}
