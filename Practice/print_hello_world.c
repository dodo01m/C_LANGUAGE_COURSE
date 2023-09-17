#include<stdio.h>

void helloworld(int count) {
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    helloworld(count -1 );
}

int main() {

    helloworld(5);
    return 0;
}
