#include<stdio.h>
int main() {
    int yr;
    scanf("%d",&yr);

    if(((yr % 100 != 0) && (yr % 4 == 0)) || (yr % 400 == 0 || yr % 4 == 0)) {
        printf("Leap year\n");
    }
    else {
        printf("Not leap year\n");
    }
    return 0;
}