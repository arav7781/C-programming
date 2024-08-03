#include <stdio.h>
#include<limits.h>
int main(){
    int arr[5]={1,2,3,4,5};
    //int max = arr[0];
    int max = INT_MIN; // dono mai se kisi ko bhi reference ke liye skte hai
    //sbse chota no manke chlna hai isko
    for(int i = 1;i<=4;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}     