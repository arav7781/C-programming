#include<stdio.h>

int main() {
    int n,ch;
    printf("enter the no to be checked:");
    scanf("%d",&n);
    printf("\n");
    printf("1.whether the no is prime or not \n2.whether the no is even or odd");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    
    int flag = 0;
    switch(ch){
        case 1:
        if (n == 0 || n == 1){
            flag = 1;
        }
            
 
        for (int i = 2; i <= n / 2; i++) { 
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
        break;
        case 2:
        if(n%2 == 0){
            printf("\n%d is even no",n);
        }
        else{
            printf("the no is not prime");
        }
        default:
            printf("\nEither the no or the choice entered is not correct");
        

    }
    


  

  return 0;
}