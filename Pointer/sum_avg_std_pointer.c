//Write a C program to calculate sum, agerage and standard deviation

#include<stdio.h>
#include<math.h>

void stats(int *, int *, double *);

int main() {
    int sum;
    int avg;
    double std;
    stats(&sum, &avg, &std);
    printf("Sum = %d\nAverage = %d\nStandard deviation = %.2lf\n",sum,avg,std);
    return 0;
}

void stats(int *sm, int *av, double *st) {
    int n1, n2, n3, n4, n5;
    printf("Enter 5 integer values : ");
    scanf("%d %d %d %d %d",&n1, &n2, &n3, &n4, &n5);

    *sm = n1 + n2 + n3 + n4 + n5;
    *av = *sm / 5.0;
    *st = sqrt(pow(n1 - *av,2.0) + pow(n2 - *av,2.0) + pow(n3 - *av,2.0) + pow(n4 - *av,2.0) + pow(n5 - *av,2.0)) / 5;
}
