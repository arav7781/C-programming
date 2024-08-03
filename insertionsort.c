#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {7,5,3,65,44,3,6};
    int n = 7;
    
    for(int i = 0;i<7;i++){
        printf("%d ",arr[i]);
    }
    //insertion sort
    for(int i = 0;i<n-1;i++){//ye for loop no of passes ke liye h.
        int j = i;
        while(arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j]= arr[j-1];
            arr[j-1] = temp;
        }
       
    }
    printf("\n");
    printf("sorted array:\n");
    for(int i = 0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}