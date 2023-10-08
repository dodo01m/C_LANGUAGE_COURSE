#include<stdio.h>
int maze(int cr, int cc, int er, int ec);

int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int noOfways = maze(1,1,n,m);
    printf("Number of ways = %d\n",noOfways);

    return 0;
}

int maze(int cr, int cc, int er, int ec){
    int rightways = 0;
    int downWays = 0;
    if (cr == er && cc == ec) return 1;
    if(cr == er) {//only rightways call
        rightways += maze(cr, cc+1, er, ec);
    }
    if(cc == ec) {//only downWayscall
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr < er && cc < ec){
        rightways = maze(cr, cc+1, er,ec);
        downWays = maze(cr+1,  cc, er, ec);
    }
    int totalways = rightways + downWays;
    return totalways;
}
