#include<stdio.h>

int main(){
    int m; 
    printf("enter the no of rows:");
    scanf("%d",&m);
    int n; 
    printf("enter the no of column:");
    scanf("%d",&n);
    printf("enter the elements of first matrix:");
    int l[m][n];
    for(int i = 0;i<m;i++){ 
        for(int j = 0;j<n;j++){
            scanf("%d",&l[i][j]);
        }
    }
    int p; 
    printf("enter the no of rows:");
    scanf("%d",&p);
    int q; 
    printf("enter the no of column:");
    scanf("%d",&q);
    printf("enter the elements of second matrix");
    int z[p][q];
    for(int i = 0;i<p;i++){
        for(int j = 0;j<q;j++){
            scanf("%d",&z[i][j]);
        }
    }
    int ch;
    printf("1.whether you want to multiply the matrix \n2.OR you want to add the matrix");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
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
                        res[i][j] += l[i][k]*z[k][j];
                    }
                }
            }
            //print res
            printf("the resultant matrix after the multiplication is:");
            for(int i = 0;i<m;i++){
                for(int j = 0;j<q;j++){
                    printf("%d ",res[i][j]);
                }
            }
            printf("\n");
   
        }
        printf("\n");
        break;
        case 2:
        if(m!=p && n!=q){
            printf("the matrices can't be added");
        }
        else{
            int grr[m][n];
            for(int i = 0;i<m;i++){
                for(int j = 0;j<n;j++){
                    grr[i][j] = l[i][j] + z[i][j];
                }
            }
            printf("the resultant matrix after the addition is:");
            for(int i = 0;i<m;i++){
                for(int j = 0;j<n;j++){
                    printf("%d ",grr[i][j]);
                    
                }
            
          
            }
        
       
        }
        break;
    }
    
    return 0;
}