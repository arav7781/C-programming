#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i = n;i<=n*10;i = i + n){
    printf("%d ",i);
    }
    return 0;
}