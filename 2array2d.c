// write a program to find the row which has most number of 1 in the matrix
#include<stdio.h>
int main(){
    int mat[3][3],ind,max1,i,j,count[3]={0,0,0};
    printf("Enter the elements of the matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix you entered is :\n");
 for(i=0;i<3;i++){
        for(j=0;j<3;j++){
     printf("%d\t",mat[i][j]);       
        }
        printf("\n");
    }
     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
     if(mat[i][j]==1){
         count[i]++;
     }      
         }
    }
    max1=count[0];
    for(i=0;i<3;i++){
            if(max1<count[i]){
                max1=count[i];
                ind=i;
            }
    }
    printf("\n %d row has highest number of one in the matrix of %d",ind+1,max1);
}
