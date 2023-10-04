#include<stdio.h>
int sum(int i);
int main() {

    int n;
   // int s;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int sm = sum(n);
    printf("%d\n",sm);
    return 0;


}

int sum(int n) {
    if(n == 0 || n == 1) return 1;
   int sm = n +sum(n -1);
    return sm;
}
