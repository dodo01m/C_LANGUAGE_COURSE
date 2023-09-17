#include<stdio.h>
int main() {
    char alphabet[27];
    int counter;
    char *alphabetPtr;
    alphabetPtr = alphabet;

    for(counter = 0; counter < 26; counter++) {
        *alphabetPtr = counter + 'A';
        alphabetPtr++;
    }

    alphabetPtr = alphabet;

    for(counter = 0; counter < 26; counter++){
        printf("%c\t",*alphabetPtr);
        alphabetPtr++;
    }
    printf("\n");
    return 0;
}
