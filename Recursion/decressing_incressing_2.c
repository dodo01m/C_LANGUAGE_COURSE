//Write a C program to print insressing decressing
#include<stdio.h>
void incressing(int);
//void decressing(int);
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
   // decressing(num);
    incressing(num);

    return 0;
}

void incressing(int n){
    if(n == 0) return;
    printf("%d\n",n);
    incressing(n-1);
    printf("%d\n",n);
    return;
}

