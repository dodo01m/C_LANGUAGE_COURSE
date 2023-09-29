#include<stdio.h>
//#define SUM(a,b) (a + b)
//void sum();
#include "sum.h"
int main() {
	int a, b;
	printf("Enter the value of a and b :");
	scanf("%d%d",&a,&b);
	//int sum = SUM(a,b);
//	printf("Sum = %d\n",sum);
	sum(a,b);
	return 0;
}
/*
void sum(int a, int b){
	int sum;
	sum = a + b;
	printf("Sum = %d\n",sum);
}*/
