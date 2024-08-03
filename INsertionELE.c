#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    int pos;
    printf("Enter the position of the array");
    scanf("%d",&pos);
    int num = 5;
    for(int i = 0;i<size-1;i++){
        scanf("%d",&a);
    }
    for(int i = size;i>=pos-1;i--){
        a[i+1] = a[i];
    }
    a[pos-1] = num;
    size++; 
    for(int i = 0;i<size;i++){
        printf("%d",a);
    }
}