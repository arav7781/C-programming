#include<stdio.h>
int increasing(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    printf("%d\n",x);
}
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    increasing(1,n);
    
   
    return 0;
}