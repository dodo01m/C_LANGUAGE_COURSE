#include<stdio.h>
long int powrlog(int a, int b);
int main() {
    int a, b;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    long int pr = powrlog(a,b);
    printf("%d to the power %d is %ld\n",a,b,pr);
    return 0;
}
long int powrlog(int a, int b){
   // if(b == 1 || b == 0) return a;
    if(b == 0) return 1;
    int x = powrlog(a,b/2);
    if(b % 2==0){
        return x * x;
    }
    else {
        return x * x * a;
    }

}
