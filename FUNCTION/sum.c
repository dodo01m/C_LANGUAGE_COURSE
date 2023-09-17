#include<stdio.h>

int calsum(int , int, int); //function prototype declaration

int main() {
    int a, b, c, sum;
    printf("Enter any three numbers: \n");
    scanf("%d %d %d",&a,&b,&c);

    sum = calsum(a,b,c);

    printf("Sum = %d\n",sum);

    return 0;

}

int calsum(int w, int p, int q) {
    int d;
    d = w + p + q;
    return (d);
}
