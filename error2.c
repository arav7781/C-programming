#include<stdio.h>
#include<string.h>
typedef struct student{
    int rollno;
    int yearOfJoining;
    char course[20];
    char branch[20];
    char name[15];
} student;
void check(s1,s2){
    if(s1.name == s2.name){
        printf("the names are same");
    }
    else printf("names are not same");
    if(s1.rollno == s2.rollno){
        printf("the roll no are same");
    }
    else printf("rollnos are not same");
    if(s1.course  == s2.course){
        printf("the courses are same");
    } 
    else printf("courses are not same");
    if(s1.branch  == s2.branch){
        printf("the branches are same");
    } 
    else printf("branches are not same");
    
    return;
}
int main(){
    student s1;
    s1.rollno = 1;
    s1.yearOfJoining = 1999;
    strcpy(s1.name,"rinku");
    strcpy(s1.course,"engeerining");
    strcpy(s1.branch,"cse");

    student s2;
    s1.rollno = 4;
    s1.yearOfJoining = 1999;
    strcpy(s1.name,"rahul");
    strcpy(s1.course,"engeerining");
    strcpy(s1.branch,"civil");
    check(s1,s2);
    

   
    return 0;
}