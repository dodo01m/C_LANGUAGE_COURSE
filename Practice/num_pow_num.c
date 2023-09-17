#include<stdio.h>
int main() {
    int power = 1;
    int x;
    int y;

    printf("Enter the value of x and b: \n");
    scanf("%d%d",&x, &y);
    for(y ; y >= 1; y--){
        power = power * x;
    }
    printf("x to the power y = %d",power);
    return 0;
}
