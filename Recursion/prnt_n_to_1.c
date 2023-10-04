// Write a c program to print n to 1 using recursion.
#include<stdio.h>
void num_pnt(int num);
int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    num_pnt(num);
    return 0;
}

// void num_pnt(int num){
//     for(num; num >=1; num--){ or for(int 1 = 1; i<=n; i++)
//         printf("%d",num);
//         printf("\n");
//     }
//
// }

void num_pnt(int num){
    //case case
    if(num == 0) return;
    printf("%d\n",num);
    num_pnt(num -1);
    return;

}

