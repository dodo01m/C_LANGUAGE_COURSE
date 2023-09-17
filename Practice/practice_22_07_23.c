// Variables

#include<stdio.h>
int main() { 
    int a = 10;
    static int b = 5;

    printf("The value of a = %d\n",a);
    printf("The value of b = %d\n",b);

    //checking static variable

    printf("The value of a = %d\n",a);
    printf("The value of b = %d\n",b);

    int x=10;//local variable  
    static int y=10;//static variable  
    x=x+1;  
    y=y+1;  
    printf("%d,%d\n",x,y); 
    printf("y = %d",y); 

    return 0;

}
