// write a program to find the minimum value of an array
#include <stdio.h>
int main()
{
    int size,arr[size],i;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("Enter the elements of the array :");
    for(i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++) {
        printf("%d\t",arr[i]);
    }
    for(i=0; i<size; i++) {
        if(arr[0]>arr[i])
            arr[0]=arr[i];
    }
    printf("\nsmallest elements  is %d\n",arr[0]);
    return 0;
}
