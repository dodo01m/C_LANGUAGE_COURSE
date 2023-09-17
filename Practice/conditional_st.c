#include<stdio.h>
int main() {
    int age; 
    printf("Enter the age : \n");
    scanf("%d",&age);

    age >= 18 ? printf("Adult\n"):printf("Not adult\n");
    
    return 0;
}