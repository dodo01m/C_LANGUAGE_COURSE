// Write a c program to calculate area and perimeter of a circle

#include<stdio.h>
#define PI 3.14
void areapri(int r, float *a, float *p);

int main() {
    int radius;
    float area, perimeter;
    printf("Enter the radius of the circle : ");
    scanf("%d",&radius);

    areapri(radius, &area, &perimeter);
    printf("Area = %.2f\n",area);
    printf("Perimeter = %.2f\n",perimeter);
    return 0;
}

void areapri(int r, float *a, float *p){
    *a = PI * r * r;
    *p = PI * 2 * r;
}
