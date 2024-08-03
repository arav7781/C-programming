#include <stdio.h>
int main(){
    int marks[]={95,90,31,25,100,50,15,89,97,30};
    for(int i = 0;i<=9 ;i++){
        if(marks[i]<35){//index no print hore hai output mai
            printf("%d ",i);
        }
    }
    
    return 0;
}