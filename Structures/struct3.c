#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {23, 8.1, "Manoj"};

    printf("Roll no = %d\n",s1.roll);
    printf("cgpa no = %f\n",s1.cgpa);
    printf("name = %s\n",s1.name);

    struct student *ptr;
    ptr = &s1; // struct student *ptr = &s1;

    printf("%d\n",(*ptr).roll);
    printf("%f\n",(*ptr).cgpa);
    printf("%s\n",ptr->name);

    return 0;
}
