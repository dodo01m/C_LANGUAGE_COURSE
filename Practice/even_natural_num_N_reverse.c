#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);

    printf("The even numbers: \n");

    for(N; N >= 1; N--){
        printf("%d\t",2 * N);
    }
    return 0;
}
