#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name : ");
    scanf("%s",name);
    printf("enter age : ");
    scanf("%d",&age);
    printf("Enter the cgpa : ");
    scanf("%f",&cgpa);

    fprintf(fptr, "%s\n",name);
    fprintf(fptr, "%d\n",age);
    fprintf(fptr, "%f\n",cgpa);
    return 0;
}
