#include <stdio.h>

int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum = 0;
    int LastDigit;
    while(n!=0){
        if(LastDigit%2==0){
            sum = sum+LastDigit;
            n = n/10;
            LastDigit = n%10;// modulus krne se remainder mil jayega aur wo rem hi last digit hoga
        }
        //LastDigit = n%10;
        //n = n/10;
        //sum = sum+LastDigit;
        
    }
   printf("the sum is %d",sum);
    
    return 0;
}