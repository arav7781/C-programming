#include <stdio.h>
int main() {
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    
   
        for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n+1-i;j++){ //i+j = n+1(i is no of rows, j is no of column)
        printf("*");
    }
        printf("\n");
    }

    return 0;
} 