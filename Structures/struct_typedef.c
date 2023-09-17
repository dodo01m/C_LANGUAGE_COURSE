#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
} std;


int main() {
    std s1;
    s1.roll = 23;
    s1.cgpa = 8.1;
    strcpy(s1.name, "Manoj");

    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);

    return 0;
}
