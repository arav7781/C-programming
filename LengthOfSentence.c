#include<stdio.h>
int main(){
    char a[100];
    printf("Enter the Sentence:");
    gets(a);
    printf("%s",a);
    int count = 0;
    for(int i = 0;a[i]!='\0';i++){
        if(a[i]!=' '){
            continue;
        }
        count++;
    }
    printf("\n");
    printf("The length of the sentence is:%d",count);
    
    return 0;
}

   