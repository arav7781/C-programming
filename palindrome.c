#include<stdio.h>
void palindrome(int arr[], int n){
    int flag = 0;
    for(int i = 0; i <= n / 2 && n != 0; i++){
        if(arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf(" the array you entered is not a Palindrome.");
    else
        printf("the array you entered is a Palindrome.");
}
 

int main(){
    int arr[5];
    printf("enter the elements to check if the array is palindrome:");
    for(int i = 0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    palindrome(arr, n);
    return 0;
}