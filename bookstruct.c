#include<stdio.h>
#include<string.h>
int main(){
    struct book{//user defined data type
        int noOfPages;
        float price;
        char name[15];
    }a,b,c;
    a.noOfPages = 100;
    a.price = 411.50;
    strcpy(a.name,"Attack on Titan");//to print string name in structures we use strcpy function.
    printf("%d\n",a.noOfPages);
    printf(" %f\n",a.price);
    printf("%s\n",a.name);
    return 0;
}