#include <stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int sumeven = 0;
    int sumodd = 0;
    for(int i =1;i<=6;i++){
        if(i%2 == 0){
            sumeven += arr[i];

        }

        else{
            sumodd += arr[i];


        }

    
    }
    printf("%d",sumeven-sumodd);
    return 0;
}