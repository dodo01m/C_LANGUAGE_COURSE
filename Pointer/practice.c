#include<stdio.h>
void stats(int *, int *);

int main() {
    // int i = 3, *j, **k;
    // j = &i;
    // k = &j;
    // printf("Address of i = %u\n",&i);
    // printf("Address of i = %u\n",j);
    // printf("Address of i = %u\n",*k);
    // printf("Address of j = %u\n",&j);
    // printf("Address of j = %u\n",k);
    // printf("Address of k = %u\n",&k);
    //
    // printf("Value of j = %u\n",j);
    // printf("Value of k = %u\n",k);
    // printf("Value of i = %d\n",i);
    // printf("Value of i = %d\n",*j);
    // printf("Value of i = %d\n",**k);
    // printf("Value of i = %d\n",*(&i));
    int sum, avg;
    stats(&sum, &avg);
    printf("Sum = %d\nAverage = %d\n",sum, avg);


    return 0;
}
void stats(int *s, int *av) {
    int a,b,c,d,e;
    printf("Enter 5 integer : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    *s = a + b + c + d + e;
    *av = *s / 5;
}
