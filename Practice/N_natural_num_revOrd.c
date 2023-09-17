// Print N natural numbers in reverse order.

#include<stdio.h>
int main() {
    int num, i = 0;

    printf("Enter the number: \n");
    scanf("%d",&num);

    /*for(num ; num >= 1; num--){
        printf("%d\t",num);
        i++;
    }*/

    while(num >= 1){
        printf("%d\t",num);
        num--;
        i++;
    }

    printf("\nLoop is exicuted %d times.\n",i);
    return 0;

}
