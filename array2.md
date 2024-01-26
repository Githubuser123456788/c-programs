#include <stdio.h>

int main() {
     int size,arr[size],i,prod=1;
     printf("Enter the size of array :\n");
     scanf("%d",&size);
     printf("Enter the elements of the array :");
         for(i=0;i<size;i++){
         scanf("%d",&arr[i]); 
         }
         for(i=0;i<size;i++){
         printf("%d\t",arr[i]);
         }
         for(i=0;i<size;i++){
           prod*=arr[i];
         }
         printf("\nproduct is %d\n",prod);
    return 0;
}
