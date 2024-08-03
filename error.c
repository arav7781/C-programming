#include <stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter the no which you want to check if it is present in the array:");
    scanf("%d",&x);
    int idx = 0;
    bool flag = false;
    for(int i = 0;i<n;i++){
        if(arr[i] = x){
            flag = true;
            idx = i;
            break;
        }
    }    
    printf("the index no of the array which is present int the array is :\n",idx);
    if(flag = true) printf("the no you entered is present in the array");
    if(flag = false) printf("the no you entered is not present in the array");
    return 0;
}     