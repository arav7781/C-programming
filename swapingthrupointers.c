#include <stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a;
    printf("Enter the value for a:");
    scanf("%d",&a);
    int b;
    printf("Enter the value for b:");
    scanf("%d",&b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a,&b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
