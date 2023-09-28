#include<stdio.h>
int i;
void increment();
void decrement();

int main() {
    printf("i = %d\n",i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}
void increment(){
    i += 1;
    printf("incresing i = %d\n",i);
}
void decrement(){
    i -= 1;
    printf("Decresing i = %d\n",i);
}
