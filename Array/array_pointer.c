#include<stdio.h>
int main() {
    int age = 23;
    int *ptr = &age;
    printf("%u\n",ptr);

    ptr++;

    printf("%u\n",ptr);
    printf("%u\n",&age);
    ptr--;
    printf("%u\n",ptr);


    return 0;
}
