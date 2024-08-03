#include<stdio.h>
int main(){
    int m; 
    printf("enter the no of rows:");
    scanf("%d",&m);
    int n; 
    printf("enter the no of column:");
    scanf("%d",&n);
    printf("enter the elements of the  matrix");
    int a[m][n];
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&a[i][j]);

        }
    }
    //wave printing
    printf("the resultant matrix after wave printing is:");
    printf("\n");
    for(int j = 0;j<n;j++){
        if(j%2 == 0){
            for(int i = m-1;i>=0;i--){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        else{
            for(int i = 0;i<m;i++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
        
            
    return 0;
}