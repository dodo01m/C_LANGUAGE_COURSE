//SWtructure is a user define data types.

#include<stdio.h>
#include<string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

int main() {
    struct student s1;
    s1.roll = 23;
    s1.cgpa = 8.2;
    //s1.name = "manoj";
    strcpy(s1.name, "manoj");
    printf("roll no = %d\n",s1.roll);
    printf("cgpa = %f\n",s1.cgpa);
    printf("name = %s\n",s1.name);

    struct student s2;
    s2.roll = 22;
    s2.cgpa = 9.2;
    //s1.name = "manoj";
    strcpy(s2.name, "Bharat");
    printf("roll no = %d\n",s2.roll);
    printf("cgpa = %f\n",s2.cgpa);
    printf("name = %s\n",s2.name);

    struct student s3;
    s3.roll = 7;
    s3.cgpa = 9.7;
    strcpy(s3.name, "abhi");
    printf("roll no = %d\n",s3.roll);
    printf("cgpa = %f\n",s3.cgpa);
    printf("name = %s\n",s3.name);

    return 0;
}
