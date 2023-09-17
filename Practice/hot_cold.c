//Write a function to print "Hot" or "Cold" depending on the temperature user enters.

#include<stdio.h>

void hotcold(float temp){
    if( temp >= 20){
    printf("Hot\n");
    }
    else if(temp < 20 && temp > 0) {
        printf("Little hot\n");
    }
    else {
        printf("Cold\n");
    }
}

int main() {
    float temp;
    scanf("%f",&temp);

    hotcold(temp);
    return 0;
}
