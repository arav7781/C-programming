#include<stdio.h>
#include<string.h>
int main(){

    typedef struct person{//
        int age;
        char name[15];
    } pw;
    pw a;//pw = struct book using typedef
    a.age = 25;
    strcpy(a.name,"Arav");
    printf("The age of person A is:%d\n",a.age);
    printf("The name of person A is %s\n",a.name);//structures are stored in continous memory loaction 
    pw b;
    b.age = 22;
    strcpy(b.name,"karan");
    printf("The age person B is:%d\n",b.age);
    printf("The Name of person B is %s\n",b.name);
    return 0;
}