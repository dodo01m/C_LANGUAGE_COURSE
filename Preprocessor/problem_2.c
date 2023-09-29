#include<stdio.h>
#include "areaperi.h"

int main() {
    //Circle
    float r;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);
    float area_c = AREAC(r);
    printf("Area of the circle = %f\n",area_c);
    float peremeter_c = PERIC(r);
    printf("Peremeter of the circle = %f\n",peremeter_c);

    //For Square
    float l;
    printf("Enter the side of the square : ");
    scanf("%f",&l);
    float area_s = AREAS(l);
    float Peremeter_s = PERIS(l);
    printf("Area of the square = %f\nPeremeter of the square = %f\n",area_s,Peremeter_s);

    //For Triangle
    float x,y,z,b,h;
    printf("Enter the sides of the triangle : ");
    scanf("%f%f%f",&x,&y,&z);
    printf("Enter the value of b and h : ");
    scanf("%f%f",&b,&h);
    float area_t = AREAT(b,h);
    printf("Area of the triangle = %f\n",area_t);
    float peremeter_t = PERIT(x,y,z);
    printf("Peremeter of the triangle = %f\n",peremeter_t);

    return 0;
}
