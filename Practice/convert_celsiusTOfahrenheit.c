// Write A c program to calculate celsius to fahrenheit.

#include<stdio.h>

//Function prototype
float Fahrenheit(float celsius);

int main() {
    float celsius;
    scanf("%f",&celsius);
    printf("Fahrenheit = %.2f\n",Fahrenheit(celsius));
    return 0;

}

//Function Definiation
float Fahrenheit(float c){
    float F;
    F = (c * 9.0 / 5.0) + 32;
    return F;
}
