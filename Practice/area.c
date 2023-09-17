// find out area of a triangle\

#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, sp, area;

    printf("Enter the values of a,b,c : \n");
    scanf("%f%f%f",&a,&b,&c);

    sp = (a + b + c) / 2;
    area = sqrt(sp * (sp -a) * (sp -b) * (sp -c));
    printf("The area of the triangle = %f \n",area);

    return 0;
}