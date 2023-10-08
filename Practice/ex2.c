#include<stdio.h>
int main() {
    int a = 100, b = 200, c = 300;
    if(!a >= 500)
        b = 300;
    c = 400;
    printf("%d%d%d",a,b,c);
    return 0;
}
