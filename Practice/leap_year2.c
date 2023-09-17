#include<stdio.h>
int main() {
    int yr;
    scanf("%d",&yr);

    if(yr % 400 == 0) {
        printf("Leap year\n");
    }
    else if(yr % 100 == 0) {
        printf("Not yeap year\n");
    }
    else if(yr % 4 == 0){
        printf("Leap year\n");
    }
    else {
        printf("Not leap year\n");
    }

}