#include<stdio.h>
int main() {
    int l = 1  , u  = 300, x, i;
    //l = 1;
    //u = 300;

    printf("Prime numbers between 1 and 300 are: \n");

    for(x = l + 1; x <= u - 1; x++) {
        for(i = 2; i <= x - 1; i++){
            if(x % i == 0){
                break;
            }
        }
        if(i == x) {
            printf("%d\t",i);
        }


    }
    return 0;
}
