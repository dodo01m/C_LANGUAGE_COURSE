#include<stdio.h>
#include<string.h>
void saltedPass(char arr[]);

int main()
{
    char pass[100];
    scanf("%s",pass);

    saltedPass(pass);
    return 0;

}
void saltedPass(char arr[]){
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass,arr);
    strcat(newPass,salt);
    puts(newPass);
}
