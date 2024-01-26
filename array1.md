// program to find the sum of all elements of an array
#include <stdio.h>
int main() {
     int size,arr[size],i,sum=0;
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
           sum+=arr[i];
         }
         printf("\nsum is %d\n",sum);
    return 0;
}
