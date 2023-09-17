// Example of library functions

#include<stdio.h>
#include<math.h>

int main() {
    int a = 0.5;
    float s, c, t, z;

    s = sin(a);
    c = cos(a);
    t = tan(a);
    z = pow(a,2);

    printf("s = %f\nc = %f\nt = %f\n z = %f", s, c, t, z);

    return 0;
}
