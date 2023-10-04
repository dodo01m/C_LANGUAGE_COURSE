#include<stdio.h>
int powr(int a, int b);
int main() {
    int a, b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    int pr = powr(a,b);
    printf("%d to the power %d is %d\n",a,b,pr);
    return 0;
}
int powr(int a, int b){
    int power = 1;
    for(int i = 1; i <= b; i++){
        power = power * a;
    }
    return power;
}
