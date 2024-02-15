•	// write a program to find the row which has maximum sum and how much
#include<stdio.h>
int main(){
    int mat[2][2],sum[2],ind,i,j,Rmax;
    printf("Enter the elements of the matrix :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix you entered is :\n");
 for(i=0;i<2;i++){
        for(j=0;j<2;j++){
     printf("%d\t",mat[i][j]);       
        }
        printf("\n");
    }
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i]+=mat[i][j];
        }
}
    Rmax=sum[0];
     for(i=0;i<2;i++){
     if(Rmax<sum[i]){
         Rmax=sum[i];
         ind=i;
     }      
    }
    printf("\n %d row has highest sum in the matrix of %d",ind+1,Rmax);
}
