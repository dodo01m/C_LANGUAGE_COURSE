#include<stdio.h>
int main() {
    int i, j;

    for(i = 1; i <= 4; i++){
        int k = 1;
        for(j = 1; j <= 7; j++){
            if(j >= 5 - i && j <= 3 + i){
                printf("%d",k);
               j < 4 ? k++: k--;
                //k < i? k++:k--;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
