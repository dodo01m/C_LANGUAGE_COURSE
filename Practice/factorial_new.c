#include<stdio.h>
int factorial(int num);

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Factorial = %d\n",factorial(num));
    return 0;
}

int factorial(int n){
    int facto = 1;
    for(int i = 1; i <= n; i++){
        facto = facto * i;
    }
    return facto;
}
