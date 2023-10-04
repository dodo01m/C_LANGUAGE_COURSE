#include<stdio.h>
int fact(int);
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int f = fact(n);
    printf("factorial = %d\n",f);
    return 0;
}
int fact(int num){
    int ft = 1;
    for(num; num >=1; num--){
        ft = ft * num;
    }
    return ft;
}
