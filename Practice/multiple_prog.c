#include<stdio.h>
#include<stdlib.h>
int main() {
    int choice;
    int fact = 1, i, num;

    for(1;;) {
        printf("1. Factorial\n");
        printf("2. Prime\n");
        printf("3. Odd or Even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                    printf("Enter the number: \n");
                    scanf("%d",&num);

                    for(num; num >= 1; num--){
                        fact = fact * num;
                    }
                    printf("Factorial = %d\n",fact);
                    break;

            case 2:
                    printf("Enter the number: \n");
                    scanf("%d",&num);

                    for(i = 2; i <= num -1; i++) {
                        if(num % i == 0){
                            break;
                        }
                    }
                    if(i == num){
                        printf("The number is a Prime number.\n");
                    }else {
                        printf("The number is not a Prime number.\n");
                    }
                    break;

            case 3:
                    printf("Enter the number: \n");
                    scanf("%d",&num);
                    if(num % 2 == 0){
                        printf("The number is a even number.\n");
                    }
                    else {
                        printf("The numbe is a odd number.\n");
                    }
                    break;

            case 4: exit(0);

            default:
                    printf("Wrong choice\n");

        }
    }

    return 0;
}
