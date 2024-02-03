/*write a program to rotate the array from any random value k*/
#include <stdio.h>
void reverse(int arr[],int si,int ei){
     for(int i=si,j=ei;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
     return;
      }
int main()
{
    int arr[7]={1,2,3,4,5,6,7},i,temp,j,k;
    printf("Enter the value of k");
    scanf("%d",&k);
    reverse(arr,0,6);
    reverse(arr,0,k-1);
    reverse(arr,k,6);
    for(i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
}
