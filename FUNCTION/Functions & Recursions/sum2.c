#include<stdio.h>

//function declaration
void calsum();

int main() {
    int a, b, c;
    printf("Enter three Numbers :  \n");
    scanf("%d%d%d", &a, &b, &c);
    calsum(a,b,c);
    return 0;

}

void calsum(int a, int b, int c) {
    int addition;
    addition = a + b + c;
    printf("The sum of a, b and c is = %d\n",addition);
}
