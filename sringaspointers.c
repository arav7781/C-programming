#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Arav";
    char* ptr = str[0];
    printf("%p\n",&str[0]);
    printf("%p",str);
    
    return 0;
}