//1st pointer program
#include<stdio.h>
//void swapV(); // Call by value
void swapv(int *x, int *y);


int main() {
    //Progrm 1
    // int i = 3;
    // printf("Address of i = %u\n",&i); // & is used for address and %u or %p is user for pointer format specifier
    // printf("Value of i = %d\n",i);
    // printf("Value of i = %d\n",*(&i)); // *(&i) is representing that what value is stored in the address of i


    //Program 2
    // int i = 3;
    // int *ptr;
    // ptr = &i;
    //
    // //Address printing
    // printf("Address of i = %u\n",&i);
    // printf("Address of i = %u\n",ptr);
    // printf("Address of ptr = %u\n",&ptr);
    //
    // //Value printing
    // printf("The value of i = %d\n",i);
    // printf("The value of i = %d\n",*(&i));
    // printf("The value of j = %u\n",ptr);
    // printf("The value of j = %d\n",*ptr);

    //Program 3
    // int *alpha;
    // char *ch;
    // float *s;
    // printf("Address of alpha = %u\n",&alpha);
    // printf("Address of ch = %u\n",&ch);
    // printf("Address of s = %u\n",&s);
    //
    // printf("Integer size %d\n",sizeof(int));

    //Program 4 pointer to pointer

    // int *ptr;
    // int *ptr2;
    // ptr = &ptr2;
    // printf("Address of ptr = %u\n",&ptr);
    // printf("Address of ptr2 = %u\n",&ptr2);
    // printf("Value at ptr = %u\n",ptr);
    // printf("Value at ptr2 = %u\n",ptr2);


    //Program 4 : swap 2 interger by call by value

    // int a = 10, b = 20;
    // swapV(a,b);
    // printf("a = %d and b = %d\n",a,b);
    // return 0;

    int a = 10, b = 20;
    swapv(&a,&b);
    printf("a = %d and b = %d\n",a,b);
    return 0;

}

//     void swapV(int x, int y){
//         int t;
//         t = y;
//         y = x;
//         x = t;
//         printf("x = %d and y = %d\n",x,y);
// }

//call by reference

void swapv(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
    printf("x = %d and y = %d\n",*x, *y);
}






