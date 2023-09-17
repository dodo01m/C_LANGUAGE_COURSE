#include<stdio.h>
typedef struct accuntinfo{
    char name[100];
    long int acc_no;
} acc;


int main() {
    acc cus1 = {"Manoj", 3242422543251};
    printf("Name = %s\n",cus1.name);
    printf("Acc_no = %ld\n",cus1.acc_no);

    return 0;

}
