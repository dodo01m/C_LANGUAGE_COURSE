#include<stdio.h>
#include<string.h>
int main() {
    char name[] = "Manoj";
    int leng =  strlen(name);
    printf("Length is = %d\n",leng);

    // //string copy
    // char Nname[100];
    // strcpy(Nname, name);
    // puts(Nname);

    //String concatinate
    char str[100];
    fgets(str, 100, stdin);
   // strcat(name, str);
    //puts(name);
    printf("Concatinate string is %s\n",strcat(name, str));
    return 0;
}
