#include<stdio.h>
int main(){
    int n; 
    printf("enter the no of rows and column:");
    scanf("%d",&n);
    
    int arr[n][n]; 
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("enter the element %d row and %d column:",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for(int i = 0;i<n;i++){ 
        for(int j = i;j<n;j++){ 
        int temp = arr[i][j]; 
        arr[i][j] = arr[j][i]; //swap ka code
        arr[j][i] = temp;
        }    
        //j = i krne se for loop mai -> jo lower triangle elements dikkat dere thee
    }    // wo wapas se swap nhi honge
    for(int i = 0;i<n;i++){ //c ki jagah r aur r ki jagah c for transpose
        for(int j = 0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }   
    return 0;
}