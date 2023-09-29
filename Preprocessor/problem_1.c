#include<stdio.h>
#define ISUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
#define ISLOWER(x) (x >= 97 && x <= 122 ? 1 : 0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x,y) (x > y ? x : y)

int main() {
    int a, b;
    int d;
    char ch;
    printf("Enter any alphabet/character : ");
    scanf("%c",&ch);

    if(ISUPPER(ch) == 1)
        printf("You entered upper letter\n");
    if(ISLOWER(ch) == 1)
        printf("You entered lower letter\n");
    if(ISALPHA(ch) != 1)
        printf("You entered character\n");
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);

    d = BIG(a,b);
    printf("Bigger number is %d \n",d);
    return 0;
}
