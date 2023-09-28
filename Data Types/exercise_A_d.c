#include<stdio.h>
int x = 10;
int main() {
    int x = 30;
    {
        {
        int x = 20;
        printf("%d\n",x);
    }
    printf("%d\n",x);
    //return 0;
    }

    printf("%d\n",x);

}
