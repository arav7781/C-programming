#include<stdio.h>
void greeting(int n){
    if(n==0) return;
    printf("good morning\n");
    greeting(n-1);
    return;
}


int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    greeting(n);
    return 0;
}