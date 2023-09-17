// A number is said to be palindrom number is rev_of_num == original_num.

#include<stdio.h>
int main() {
    int num, org_num, rev_num = 0, remainder;

    printf("Enter the number: \n");
    scanf("%d",&num);

    org_num = num;

   /* for(int i = num; i > 0;) {
        remainder = i % 10;
        rev_num = rev_num * 10 + remainder;
        i = i / 10;*/
   for(num; num > 0; num = num / 10) {
       remainder = num % 10;
       rev_num = rev_num * 10 + remainder;
    }
    printf("Reverse number = %d\n",rev_num);

    // condition for palindrom number

    if(org_num == rev_num) {
        printf("The %d number is a palindrom number\n",org_num);
    }
    else  {
        printf("The %d number is not a palindrom number\n",org_num);
    }

    return 0;

}
