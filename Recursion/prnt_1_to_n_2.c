
// Write a c program to print n to 1 using recursion.
#include<stdio.h>
void num_pnt(int num);
int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    num_pnt(num);
    return 0;
}



void num_pnt(int num){
    //case case
    if(num == 0) return;
    num_pnt(num -1);
        printf("%d\n",num);

    return;

}

