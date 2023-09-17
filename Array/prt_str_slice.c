#include<stdio.h>

void slice(char sl[], int n, int m);

int main() {
    char sl[100] = "Hello World";
    //scanf("%s",sl);
   // fgets(sl,100,stdin);
    slice(sl,3,10);
    printf("%s",sl);

    return 0;
}
void slice(char sl[], int n, int m){
    char newsl[100];
    int j = 0;
    for(int i = n; i < m; i++, j++){
        newsl[j] = sl[i];
    }
    newsl[j] = '\0';

    puts(newsl);
}
