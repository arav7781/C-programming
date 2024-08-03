#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;//base case
    return n *factorial(n-1);//recursion of factorial function
    //return ek bar hi hit hoti hai jab n=1 hoga tab base case wala return chalega aur return 1 hote hi 
    //function khtm 
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;
}