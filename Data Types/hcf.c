#include<stdio.h>
int main() {
    int a, b;
    long int hcf;
    printf("Enter two integer : ");
    scanf("%d%d",&a,&b);
    for(int i = 1; i <= a || i <= b; i++){
        if(a % i == 0 && b % i == 0){
        hcf = i;
        }
    }

    printf("HCF = %ld\n",hcf);
    return 0;
}
