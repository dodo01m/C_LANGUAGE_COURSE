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
    if(b == 0) return 1;
    // int pw = a * powr(a,b-1);
    // return pw;
    return (a * powr(a,b-1));
}
