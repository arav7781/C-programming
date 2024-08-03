#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int f=1;
    for(int i=1;i<=n;i++){
        f = f*i;
    }
    printf("the factorial of the given no is:%d",f);
    return 0;
}