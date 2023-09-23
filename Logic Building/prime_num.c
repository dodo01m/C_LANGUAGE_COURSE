#include<stdio.h>
int main() {
	int num, i;
	printf("Enter the number : ");
	scanf("%d",&num);

	for(i = 2; i <= num -1; i++){
		if(num % i == 0){
			break;
		}
	}
	if(i == num){
		printf("%d is a prime number.\n",num);
	}
	else {
		printf("%d is not a prime number.\n",num);
	}
	return 0;
}
