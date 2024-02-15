•	// write a program to find the transpose of user input matrix in c programming language
#include<stdio.h>
int main(){
    int row,column,mat[row][column],i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of columns : ");
    scanf("%d",&column);
    printf("Enter the elements of the matrix :\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix you entered is :\n");
 for(i=0;i<row;i++){
        for(j=0;j<column;j++){
     printf("%d\t",mat[i][j]);       
        }
        printf("\n");
    }
    if(row !=column){
    printf("The transpose of the matrix is :\n");
     for(i=0;i<column;i++){
         for(j=0;j<row;j++){
     if(i==j)
         printf("%d ",mat[i][j]);
     else
     printf("%d ",mat[j][i]);
         }
         printf("\n");
    }
    }

    else{
            printf("The transpose of the matrix is :\n");
     for(i=0;i<row;i++){
         for(j=0;j<column;j++){
     if(i==j)
         printf("%d ",mat[i][j]);
     else
     printf("%d ",mat[j][i]);
         }
         printf("\n");
    }
}
    }
