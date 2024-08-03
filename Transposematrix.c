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
            printf("enter the element for %d row and %d column:",i,j);
            scanf("%d",&arr[i][j]);
        }
        //1 2 3 
        //4 5 6
        //after transpose
        //1 4
        //2 5
        //3 6
    }
    int brr[c][r];
    printf("\n");
    
    for(int i = 0;i<c;i++){ //c ki jagah r aur r ki jagah c for transpose
        for(int j = 0;j<r;j++){
            //printf("%d ",arr[j][i]);//j aur i ko interchange krne se transpose hoga
           brr[i][j] = arr[j][i];
        }
        printf("\n");
    }    
    for(int i = 0;i<c;i++){ //c ki jagah r aur r ki jagah c for transpose
        for(int j = 0;j<r;j++){
            printf("%d ",brr[i][j]);
           
        }
        
    }   
    return 0;
}