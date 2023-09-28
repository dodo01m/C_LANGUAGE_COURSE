#include<stdio.h>
#include<time.h>
int main() {
    clock_t start, end;
    start = clock();
    register int i;
    for(i = 1; i <= 10; i++){
        printf("%d\n",i);
    }
    end = clock();
    double duration = ((double)end-start) / CLOCKS_PER_SEC;

    printf("Duration = %lf\n",duration);
    return 0;
}
