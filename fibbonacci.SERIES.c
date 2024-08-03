#include<stdio.h>
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a = 1;
    int b=1;
    int sum =0;
    printf("fibbonacci series:%d %d ",a,b);
    for(int i=1;i<=n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
        printf("%d ",b);
    }
    printf("\n");
    printf("the fibbonacci sum of the no is:%d",sum);
    return 0;
}