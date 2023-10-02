#include<stdio.h>
void areaperi(int r, float *, float *);
int main() {
    int r;
    float area, perimeter;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    areaperi(r,&area,&perimeter);
    printf("Area = %f\nPerimeter = %f\n",area,perimeter);
    return 0;
}
void areaperi(int r, float *a, float *p) {
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}
