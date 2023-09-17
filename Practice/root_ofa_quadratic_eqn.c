#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,D;  // a, b are the coefficient of x^2 and x , c is constants.
    float x1, x2;
    printf("Enter ocefficient of x^2, x and c: \n");
    scanf("%d%d%d",&a, &b, &c);

    D = b * b - 4 * a * c;

    if(D > 0) {
        printf("Roots are real: \n");
        x1 = ((-b + sqrt(D)) / (2 * a));
        x2 = ((-b - sqrt(D)) / (2 * a));
        printf("Roots are: %f \t %f\n",x1,x2);
    }
    else if(D < 0) {
        printf("Both roots are imiginary.\n");
    }
    else {
        printf("Both Roots are equal.\n");
        x1 = x2 = -b / (2.0 * a);
        printf("Roots are: %f \t %f\n",x1,x2);
    }

    return 0;

}
