#include<stdio.h>
int main() {
    int marks[3];

    printf("Enter the marks of phy: ");
    scanf("%d",&marks[0]);

    printf("Enter the marks of chem: ");
    scanf("%d",&marks[1]);

    printf("Enter the marks of math: ");
    scanf("%d",&marks[2]);

    printf("phy = %d\nchem = %d\nmath = %d\n",marks[0],marks[1],marks[2]);
    return 0;
}
