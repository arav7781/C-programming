#include<stdio.h>
int main(){
    int r;
    printf("enter the no of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the no of column:");
    scanf("%d",&c);
    int arr[r][c]; //r*c elements
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
    return 0;
}