// Write a C program to print all armstrong number under 1000

#include<stdio.h>
int main() {
    int  x, i, r, s;

    printf("All Armstrong number under 1000: \n");

    for(i = 1; i <= 1000; i++){
        x = i;
        s = 0;
        for(x; x != 0; ){
            r = x % 10;
            s = s + r * r * r;
            x = x / 10;
        }
        if(s == i){
            printf("%d\t",i);
        }
    }
    return 0;
}
