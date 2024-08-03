#include<stdio.h>
int main(){
    int m; 
    printf("enter the no of rows:");
    scanf("%d",&m);
    int n; 
    printf("enter the no of column:");
    scanf("%d",&n);
    printf("enter the elements of first matrix");
    int a[m][n];
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&a[i][j]);

        }
    }
    int p; 
    printf("enter the no of rows:");
    scanf("%d",&p);
    int q; 
    printf("enter the no of column:");
    scanf("%d",&q);
    printf("enter the elements of second matrix");
    int b[p][q];
    for(int i = 0;i<p;i++){
        for(int j = 0;j<q;j++){
            scanf("%d",&b[i][j]);

        }
    }
    if(n!=p){
        printf("these two matrix cant be multiplied");
    }
    else{
        //multiplication ka code
        int res[m][q];
        for(int i = 0;i<m;i++){
            for(int j = 0;j<q;j++){
                res[i][j] = 0;
               //multiplication ke waqt i row of a and j column of b remain constant
                for(int k = 0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        //print res
        printf("the resultant matrix is:");
        printf("\n");
        for(int i = 0;i<m;i++){
            for(int j = 0;j<q;j++){
                printf("%d ",res[i][j]);
            }
        }
    
    }
    return 0;
}