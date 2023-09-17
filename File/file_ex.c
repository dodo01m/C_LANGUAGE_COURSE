#include<stdio.h>
int main() {
	FILE *fptr;
	fptr = fopen("test.txt","w");

	//printf("%c\n",fgetc(fptr));
	fputc('M', fptr);
	fputc('n', fptr);
	return 0;
	
}
