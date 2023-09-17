#include<stdio.h>
void slice(char sl[], int n, int m);

int main(){
    char sl[] = "Hello World";
    slice(sl, 3, 6);

    return 0;
}

void slice(char sl[], int n, int m){

    char newStr[100];
    int j = 0;
    for(int i = n; i<=m; i++, j++){
        newStr[j] = sl[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}


