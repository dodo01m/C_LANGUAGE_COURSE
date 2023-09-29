#include<stdio.h>
#define MEAN(a,b) ((a + b) / 2.0)
#define ABSV(x) (x < 0 ? x * (-1) : x)
#define TOLOWER(y) ((y) + 32)
#define TOUPPER(z) ((z) - 32)
#define BIG(p,q,r) ((p > q && p > r) ? p : ((q > p && q > r) ? q : r))

int main() {
    int a, b, num, x, y, z, bigr_num;
    char cha, chb, ch1, ch2;

    //For mean
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    float mean = MEAN(a,b);
    printf("Arithmetic mean = %f\n",mean);

    //For Absolute value
    printf("Enter the number : ");
    scanf("%d",&num);
    int abs_val = ABSV(num);
    printf("Absolute value of %d is = %d\n",num, abs_val);

    //For convert to lower case
    printf("Enter the Upper case letter : ");
    scanf("%c",&ch1);
    cha = TOLOWER(ch1);
    printf("Lower case letter is %c\n",cha);

    //For convert to upper case
    printf("Enter the lower case letter : ");
    scanf("%c",&ch2);
    chb = TOUPPER(ch2);
    printf("Upper case letter is %c\n",chb);

    //For biggest number
    printf("Enter three integer : ");
    scanf("%d%d%d",&x,&y, &z);
    bigr_num = BIG(x,y,z);
    printf("The bigger number is %d\n",bigr_num);

    return 0;
}
