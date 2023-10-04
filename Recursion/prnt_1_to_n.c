//Write a C program to print 1 to n

#include<stdio.h>
void increasing(int,int);
int main() {
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
void increasing(int x, int n){
    if(x > n)  return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}
