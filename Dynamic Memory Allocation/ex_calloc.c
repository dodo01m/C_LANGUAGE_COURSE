#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(500,sizeof(int));

    for(int i = 0; i<500; i++){
        ptr[i] = i + 1;
    }

    printf("Print 500 natural number: ");
     for(int i = 0; i<500; i++){
        printf("%d\t",ptr[i]);
    }

    printf("\n");
    free(ptr);


    return 0;
}

