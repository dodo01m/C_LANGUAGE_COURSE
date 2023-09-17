#include<stdio.h>
#include<stdlib.h>
int main() {
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    for(int i = 0; i < 5; i++){
        scanf("%f",&ptr[i]);
    }

    printf("Prices are : ");
    for(int i = 0; i < 5; i++){
        printf("%.2f\t",ptr[i]);
    }
    printf("\n");
    return 0;
}
