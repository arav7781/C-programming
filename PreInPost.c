#include <stdio.h>
void PreInPost(int n){
    if(n==0) return;
    printf("pre %d\n",n);// notebook mai hai explaination
    PreInPost(n-1);
    printf("In %d\n",n);
    PreInPost(n-1);
    printf("Post %d\n",n);
    PreInPost(n-1);
    return;
}
int main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    PreInPost(n);
    return 0;
}