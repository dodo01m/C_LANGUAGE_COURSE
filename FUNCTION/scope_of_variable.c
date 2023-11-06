#include<stdio.h>
int b = 4;
int a = 6;
int var(int a){
    printf("a = %d",a);
}
int main() {
    //int a = 5;
    printf("a = %d\n",a);
    var(b);
    return 0;
}
