#include<stdio.h>
int main() {
	int a;
	int *ptr;
	//int **pptr;
	int age;
	printf("Enter the value of a : ");
	scanf("%i",&a);

	//assining addres of a to ptr
	ptr = &a; // ptr will store the address of a
	//pptr = &ptr; //pptr will store the address of ptr
	age = *ptr; // the value of age will be a

	//Printing the value of a
	printf("The value of a %d\n",a);
	printf("The value of a %d\n",*ptr);
	printf("The value of a %d\n",*(&a));

	//Printing the address stored in ptr
	//%p is used for hexadecimal and %u is used for unsigned int

	printf("Address of a %p\n",ptr);
	printf("Address of a %u\n",&a);
	printf("Address of a %u\n",&a);
	//printf("Address of ptr %p",&ptr);
	//printf("Address of ptr %p\n",*pptr);
	//printf("Address of ptr %p\n",*pptr);
	//printf("Address of ptr %d\n",**pptr);
	return 0;
}
