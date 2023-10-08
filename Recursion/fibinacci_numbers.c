//Fibonacci number using functions
#include<stdio.h>
int fibo(int n);
int main() {
    int num;
    printf("Enter the value of num : ");
    scanf("%d",&num);
    printf("Fibonacci numbers are %d\n",fibo(num));
    return 0;
}

int fibo(int n) {
    if(n == 1 || n == 2) return 1;
    // int ans1 = fibo(n-1);
    // int ans2 = fibo(n-2);
    // int ans = ans1 + ans2;
    // return ans;
    return fibo(n-1) + fibo(n-2);
    }

