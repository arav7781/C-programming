#include<stdio.h>
#include<string.h>
int compare(char str1[],char str2[]){
    int i,j;
    while(str1[i] == str2[i] && str2[i]!='\0'){
        if(str1[i]>str2[i]){
            return str1[i] - str2[i];
        }
        else{
            return str2[i] - str1[i];
        }
    }
}
    
int main(){
    char str1[100];
    printf("Enter any string1:");
    scanf("%s",&str1);
    char str2[100];
    printf("Enter any string2:");
    scanf("%s",&str2);
    int a = compare(str1,str2);
    if(a = 0){
        printf("strings are same");
    }
    else{
        printf("strings are not same");
    }
}