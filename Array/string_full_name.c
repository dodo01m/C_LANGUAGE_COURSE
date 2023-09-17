#include<stdio.h>
#include<string.h>
int countLength(char arr[]);
int main() {
    char arr[100] = "MANOJ";
    char arr2[100] = "Mondal";
   // strcpy(arr, arr2);
    strcat(arr, arr2);
    printf("%d\n",strcmp(arr2, arr));
    puts(arr);

    return 0;
}
// int countLength(char arr[]){
//     int count = 0;
//     for(int i = 0; arr[i] != '\0'; i++){
//         count++;
//     }
//     return count-1;
// }
