#include<stdio.h>
void charChk(char str[]);

int main() {
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    charChk(str);


    return 0;
}

void charChk(char str[]){
    char chk = 'w';
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == chk){
            printf("Present\n");
        }
        // else
        //     printf("Absent\n");
    }
}
