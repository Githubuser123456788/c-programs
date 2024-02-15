// write a program to find the multiplication of 2 matrices
#include<stdio.h>
int main(){
    int m,n,p,q,mat1[m][n],mat2[p][q],i,j,res[m][q];
     printf("Enter the number of rows of first matrix : ");
    scanf("%d",&m);
    printf("Enter the number of columns of first matrix : ");
    scanf("%d",&n);
    printf("Enter the elements of the first matrix :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
}
    }
    printf("matrix 1 is :");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",mat1[i][j]);
}
printf("\n");
    }
    printf("Enter the number of rows of second matrix : ");
    scanf("%d",&p);
    printf("Enter the number of columns of second matrix: ");
    scanf("%d",&q);
    
    printf("Enter the elements of the second matrix :\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&mat2[i][j]);
}
    }
    printf("matrix 2 is :\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",mat2[i][j]);
}
printf("\n");
    }
    if(n!=p){
        printf("\nMultiplication of matrix does not exist ");
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j] +=mat1[i][k]*mat2[k][j];
                }
            }
        }
    }
    for(i=0;i<m;i++){
            for(j=0;j<q;j++){
         printf("%d",res[i][j]);           
                }
                printf("\n");
            }
        }
