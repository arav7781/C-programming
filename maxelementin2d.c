#include<stdio.h>
#include<limits.h>
int main(){
    int r;
    printf("enter the no of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the no of column:");
    scanf("%d",&c);
    int arr[r][c]; //r*c elements
    int max = INT_MIN;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("enter the element %d row and %d column",i,j);
            scanf("%d",&arr[i][j]);
        }

    }
    printf("\n");
     for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d ",arr[i][j]);
           
        }
        printf("\n");
     }    
     for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
     }
     printf("/n");
     printf("the max no of the matrix is %d",max);    
    
    return 0;
}