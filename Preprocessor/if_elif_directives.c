#include<stdio.h>
int main() {
    int Test;
    printf("Enter the value of Test : ");
    scanf("%d",&Test);
#if Test <=5
    printf("Test = %d\n",Test);
#else
    printf("Failed\n");
#endif
}
