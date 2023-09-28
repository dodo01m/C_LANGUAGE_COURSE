#include<stdio.h>
#define PI 3.14
int main() {
    float r;
    printf("Enter the value of r : ");
    scanf("%f",&r);

    float area;
    area = PI * r * r;
    printf("Area = %f\n",area);
    return 0;
}
