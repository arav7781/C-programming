#include<stdio.h>
#include<string.h>
int main(){
    typedef int* pointer;//typedef ki wajah se pointer wala error nhi ayega
    int x =5,y = 7;
    pointer a = &x , b = &y;// compilier will consider both as pointer a and b]
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}