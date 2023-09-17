#include<stdio.h>
#include<string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

int main() {
    struct student cse[100];
    cse[0].roll = 23;
    cse[0].cgpa = 8.1;
    strcpy(cse[0].name, "manoj");

    printf("roll no = %i\n",cse[0].roll);
    printf("cgpa = %f\n",cse[0].cgpa);
    printf("name = %s\n",cse[0].name);

    return 0;
}
