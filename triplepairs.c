#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int totalpairs = 0;
    int n;
    printf("enter the value for n:");
    scanf("%d",&n);
    for(int i =1;i<=7;i++){
        for(int j =i+1;j<=7;j++){
            for(int z = j+1;z<=7;z++){
                if(arr[i]+arr[j]+arr[z] == n){
                    totalpairs++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[z]);
                }
            }
        }
    
   
    }
    printf("%d",totalpairs);   
    return 0;

}