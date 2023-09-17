// print first 10 natural odd number

#include<stdio.h>
int main() {
    printf("The first 10 natural odd numbers are: \n");

    for(int i = 1; i <= 10; i++) {
        printf("%d\t",2 * i - 1);
    }
    return 0;
}
