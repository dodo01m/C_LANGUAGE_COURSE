//Write a C program to print sum from 1 to n.

#include<stdio.h>
void sum(int,int);
int main() {
    int n;
    scanf("%d",&n);
    sum(n,0);
    return 0;

}
void sum(int x, int s){
    if(x == 0){
        printf("%d\n",s);
        return;
    }
    sum(x - 1, s + x);
   // printf("%d\n",s);
    return;

}
