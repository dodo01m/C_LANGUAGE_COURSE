#include<stdio.h>
void fun(int);

int main() {
    int a;
    printf("Enter the value of a: \n");
    scanf("%d",&a);
    fun(a);
    printf("%d\n",a);
    return 0;
}

void fun(int b){
    b = 60;
    printf("%d\n",b);
}
