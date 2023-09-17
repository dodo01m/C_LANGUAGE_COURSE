// Write a c program to print all odd numbers from 5 to 50.

#include<stdio.h>
int main() {
    int i = 5;

    while(i <= 50) {
        
        if(i % 2 != 0) {
        printf("%d\n",i);
        }
        i++;
    }
    return 0;
}