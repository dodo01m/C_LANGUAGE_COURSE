#include<stdio.h>
int maxnumber(int *a, int *b);
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1, &num2);
    int mx = maxnumber(&num1,&num2);
    printf("The maximum number = %d\n",mx);
    return 0;
}

int maxnumber(int *a, int *b){
    if(*a > *b){
        return *a;
    }
    else {
        return *b;
    }
}
