#include<stdio.h>

int main() {
    int n;
    printf("enter the no to be checked:");
    scanf("%d",&n);
    if(n%2 == 0){
        printf("%d is even no",n);
    }
    else{
        printf("the no is odd");
    }

  return 0;
}