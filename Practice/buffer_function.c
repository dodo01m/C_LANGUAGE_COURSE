#include<stdio.h>
int main() {
    char another;
    int num;

    do{
        printf("Enter the number: \n");
        scanf("%d",&num);

        printf("Square of %d is %d\n",num,num * num);
        printf("You want to enter another number y/n:");
        fflush(stdin);
        scanf("%c",&another);
    }while(another == 'y');

    return 0;
}
