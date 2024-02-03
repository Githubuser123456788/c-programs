// write a program to find the duplicate element in the array.
#include<stdio.h>
int main(){
    int arr[7]={1,2,7,5,4,3,7},i,j,idx=0;
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                idx=arr[i];
  printf("%d is duplicate element",idx);
  break;
            }
        }
    }
}
