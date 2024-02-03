// Write a program to find the second largest element of an array
#include <stdio.h>
#include<limits.h>
int main() {
    int arr[5]={5,4,3,2,1},smax,max,i;
    max = INT_MIN;
    smax = INT_MIN;
    for(i=0;i<5;i++){
     if(max<arr[i])  
     max=arr[i];
    }
     for(i=0;i<5;i++){
      if((smax<arr[i]) && (arr[i]!=max))
      smax=arr[i];
    }
    printf("%d is second largest element",smax);
    return 0;
}
