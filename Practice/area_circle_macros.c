#include<stdio.h>
#define AREA(n) (3.14 * n * n)

int main() {
    float r;
    printf("Enter the value of r : ");
    scanf("%f",&r);
    float area;
    area = AREA(r);
    printf("Area = %f\n",area);
    return 0;
}
