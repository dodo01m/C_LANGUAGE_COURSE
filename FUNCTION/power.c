#include<stdio.h>
int powercal(int, int);

int main() {
    int a, b;
    long long int power;
    printf("Enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    power = powercal(a,b);
    printf("%d to the power % d is = %lld\n",a,b,power);
    return 0;
}

int powercal(int a, int b) {
    long long int pw = 1;
    for(int i = 1; i <= b; i++){
        pw = pw * a;
    }
    return (pw);
}
