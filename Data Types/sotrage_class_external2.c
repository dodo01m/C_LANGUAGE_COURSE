#include<stdio.h>
int x = 21;
int main() {
    extern int y;
    //scanf("%d",&y);
    printf("%d %d\n",x,y);
    return 0;
}
int y = 31;
