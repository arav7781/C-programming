#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct dates{
        int date;
        int month;
        int year;
        
    } dates;
    dates a,b;
    a.date = 23;
    a.month = 12;
    a.year = 1999;

    b.date = 24;
    b.month = 3;
    b. year = 1999;
    bool flag = true;
    if(a.date!=b.date) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag==true) printf("the dates are same");
    else printf("the dates are same");     
    
    

    return 0;
 }