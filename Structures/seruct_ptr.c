#include<stdio.h>

struct complex{
	int real;
	int img;
};

int main() {
	struct complex number1 = {5, 13};
	struct complex *ptr = &number1;
	printf("Real number = %d\n",(*ptr).real);
	printf("Img number = %d\n",(*ptr).img);
	return 0;
}
