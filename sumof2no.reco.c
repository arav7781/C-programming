#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int sum(int x,int y){
    if(y == 0) return x;
    else return(add(x,y-1)+1);
}
int main() {
    int x;
    printf("enter a number x:");
    scanf("%d",&x);
    int y;
    printf("enter a number y:");
    scanf("%d",&y);
    printf("%d",sum(x,y));
    return 0;
}