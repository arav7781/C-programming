#include <stdio.h>
int maze( int cr, int cc, int er, int ec){
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }


int totalways = rightways + downways;
return totalways;
}
int main(){
    int a;
    printf("enter the no of row for the maze:");
    scanf("%d",&a);
    int b;
    printf("enter the no of column for the maze:");
    scanf("%d",&b);
    int x = maze(1,1,a,b);
    printf("the no of ways to reach from a to b is:%d",x);
    return 0;
}