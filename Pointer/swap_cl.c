#include<stdio.h>
void swap(int a, int b);

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("a = %d\nb = %d\n",x,y);
}
