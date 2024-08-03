#include<stdio.h>
int main(){
    char a[100];
    printf("Enter the Sentence:");
    gets(a);
    printf("%s",a);
    int count = 0;
    for(int i = 0;a[i]!='\0';i++){
        if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] =='o' || a[i]=='O' || a[i] == 'u' || a[i] == 'U'){
            count++;
        }
    }
    printf("\n");
    printf("%d",count);
    
    return 0;
}

   