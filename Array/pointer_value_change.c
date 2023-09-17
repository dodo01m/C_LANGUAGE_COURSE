#include<stdio.h>
int main() {
    int age = 23;
    int *ptr = &age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);
    ptr++;

    float age2 = 23.5;
    float *ptr2 = &age2;
    printf("%u\n",ptr2);
    ptr2++;
    printf("%u\n",ptr2);
    ptr2--;
    printf("%u\n",ptr2);
    ptr2++;


    return 0;
}
