#include <stdio.h>

int main() {
    int a,b;
    printf("enter the no for a:");
    scanf("%d",&a);
    printf("enter the no for b:");
    scanf("%d",&b);
    int temp;
    temp = a;
    a=b;
    b = temp;
    printf("the value of a is:%d\n",a);
    printf("the value of b is:%d",b);
    return 0;
}
