#include<stdio.h>
int main(){
    int i;
    int j = 0;
    for(i = 10,  j; i >= 1; i--) {
        printf("%d\t",i);
        j++;
    }
    printf("\nloop executed %d times.\n",j);
    return 0;
}
