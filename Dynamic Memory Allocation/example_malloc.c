#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    int n;
    printf("Enter the size of the memory location: ");
    scanf("%d",&n);

   // ptr = (int *) malloc(n * sizeof(int));
    ptr = (int *) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        printf("%d",ptr[i]);
    }
        printf("\n");


    free(ptr);
    ptr = (int *) calloc(2, sizeof(int));
    for(int i = 0; i < 2; i++){
        printf("%d",ptr[i]);
    }
    printf("\n");
    return 0;
}

