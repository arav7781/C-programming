#include<stdio.h>
int main(){
    char a[100];
    printf("Enter your name:");
    scanf("%s",&a);
    int length = 0;
    for(int i = 0;a[i]!= '\0';i++){
        length += 1;
    }
    printf(" The Length of your name is:%d",length);
    
    return 0;
}

   