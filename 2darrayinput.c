#include<stdio.h>
int main(){
    int m; 
    printf("enter the no of rows:");
    scanf("%d",&m);
    int n; 
    printf("enter the no of column:");
    scanf("%d",&n);
    int a[m][n];
   
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            printf("enter the element for %d row and %d column:",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",a[i][j]);
                
        }
        printf("\n");
    }
}