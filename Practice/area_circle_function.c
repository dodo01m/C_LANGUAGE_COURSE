#include<stdio.h>
void Area(float r);
int main() {
    float r;
    printf("Enter the value of r: ");
    scanf("%f",&r);
    Area(r);
    return 0;
}

void Area(float n){
    float area;
    area = 3.14 * n * n;
    printf("Area = %f\n",area);
}
