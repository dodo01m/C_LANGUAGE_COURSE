// C program for Macros with Arguments

#include<stdio.h>
#define AREA(x,y) (3.14 * x * y)

int main() {
    float r1 = 6.25, r2 = 2.5, a;
    a = AREA(r1,r2);
    printf("Area of r1 = %f\n",a);

   // a = AREA(r2);
   // printf("Area of r2 = %f\n",a);
    return 0;
}
