#include<stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *agv);

int main() {
    int a = 3, b = 5;
    int sum, prod, agv;
    doWork(a, b, &sum, &prod, &agv);

    printf("sum = %d\nprod = %d\nagv = %d\n",sum, prod, agv);
    return 0;
}

void doWork(int a, int b, int *sum , int *prod, int *agv){
    *sum = a + b;
    *prod = a * b;
    *agv = (a + b) / 2;
}
