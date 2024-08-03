#include <stdio.h>
void tower(int n,char s,char h,char d){//s->source rod h->helpher rod d->destination
    if(n==0) return;//base case
    tower(n-1,s,d,h);//recursion
    printf("%c -> %c\n");
    tower(n-1,h,s,d);
    return;

}
int main(){
    int n;
    printf("enter the no of disc:");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}