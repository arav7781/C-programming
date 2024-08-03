 #include<stdio.h>
int  power(int a,int b){
//int x = 1;
if(b==0) return 1;
return a*power(a,b-1);
}
int main() {
    int a;
    printf("enter a base:");
    scanf("%d",&a);
    
    int b;
    printf("enter a power:");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d raised to %d is %d",a,b,p);
    
    return 0;
}