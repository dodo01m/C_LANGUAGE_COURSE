#include<stdio.h>
int maze(int er, int ec);

int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int noOfways = maze(n,m);
    printf("Number of ways = %d\n",noOfways);

    return 0;
}

int maze(int n, int m){
    int rightWays = 0;
    int downWays = 0;

    if(n == 1 && m ==1) return 1;
    if(n == 1) { //cannot go down
        rightWays += maze(n, m-1);
    }
    if(m == 1) { //cannot go right
        downWays += maze(n-1,m);
    }
    if(n > 1 && m > 1){
        rightWays += maze(n, m-1);
        downWays += maze(n-1,m);

    }

    int totalWays = rightWays + downWays;
    return totalWays;

}
