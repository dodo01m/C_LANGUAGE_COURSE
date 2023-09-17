#include<stdio.h>
int main() {
    double price[3];

    printf("Enter the price of the 3 items: ");

    for(int i = 0; i < 3; i++){
        scanf("%lf",&price[i]);
    }

    //calculating final price after adding 18% gst.

    for(int i = 0; i < 3; i++){
        price[i] = (price[i] + (price[i] * 0.18));
    }

    printf("final price of the 3 items are : \n");

    for(int i = 0; i < 3; i++){
        printf("%.2lf\n",price[i]);
    }

    return 0;
}
