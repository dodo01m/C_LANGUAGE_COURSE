#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    printf("Even numbers are: \n");

    for(num; num >= 1; num--){
        printf("%d\t",2 * num - 1);
    }
    return 0;
}
