#include<stdio.h>
int main() {
    int a = 2, b,c,d,e;
    b = a++;
    printf("%d\n",b);
    c = ++a;
    printf("%d\n",c);
    d = b++;
    printf("%d\n",d);
    e = ++c;
    printf("%d\n",d);
    printf("%d\n",c);
    printf("b = %d\t c = %d\nd = %d\t e = %d\n a= %d\n",b,c,d,e,a);

    b = a--;
    printf("%d\n",b);
    c = --a;
    printf("%d\n",c);
    d = b--;
    printf("%d\n",d);
    e = --c;
    printf("%d\n",e);
    printf("b = %d\t c = %d\nd = %d\t e = %d\n",b,c,d,e);
char ch = 'a';
ch = ch +2;
printf("%c\n",ch);

return 0;
}