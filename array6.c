#include<stdio.h>
void main()
{
    int arr[10],size,i,x,count=0;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("Enter elements of array :\n");
    for(i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are :\n");
    for(i=0; i<size; i++) {
        printf("%d\t",arr[i]);
    }
printf("\nEnter element x to compare the pairs :");
     scanf("%d",&x); 
     for(i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==x){
            count++;
            printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    printf("%d number of pairs in the array",count);
}
