#include<stdio.h>
void increasing(int x,int n){
    if(x>n) return;//base case
    printf("%d\n",x);
    increasing(x+1,n);//recursion
    return;
}
int main(){
    int n;
    printf("enter a number till which you want to print the nos:");
    scanf("%d",&n);
    increasing(1,n);
    
   
    return 0;
}