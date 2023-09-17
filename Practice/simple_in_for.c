/* Calculate simple interes*/

#include<stdio.h>
int main()
{
    int p, n;
    float si, r;

    for(int i = 1; i <= 3; i++) {
        printf("Enter the values of p, n and r respectively: \n");
        scanf("%d%d%f",&p, &n, &r);
        si = p * n * r / 100;
        printf("simple interest = %f\n",si);
    }

    return 0;
}
