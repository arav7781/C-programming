#include<stdio.h>
#include<string.h>
void len(char str1[],char str2[]){
    int len1,len2,i,j;
    while(str1[i]!='\0'){
        len1++;
    }
    while(str2[i]!='\0'){
        len2++;
    }
    if(len1>len2){
        printf("string 1 is bigger");
    }
    else{
        printf("str2 is bigger");
    }
}
int main(){
    char str1[100];
    printf("Enter any string1:");
    scanf("%s",&str1);
    char str2[100];
    printf("Enter any string2:");
    scanf("%s",&str2);
    len(str1,str2);

}