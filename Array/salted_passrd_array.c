#include<stdio.h>
#include<string.h>
void saltedPass(char password[]);

int main() {
    char password[100];
    scanf("%s",password);

    saltedPass(password);
    return 0;
}
void saltedPass(char password[]){
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}
