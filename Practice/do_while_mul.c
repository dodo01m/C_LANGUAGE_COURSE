#include<stdio.h>
int main() {
    int num;
    int i = 1;

scanf("%d",&num);
printf("The multiplication table of %d is : \n",num);

while(i <= 10) {
    printf("%d X %d = %d\n", num,i,num*i);
    i++;
}
return 0;
}