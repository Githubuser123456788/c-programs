// Write a program to find the second largest element of an array if big number is repeating.
#include <stdio.h>
#include<limits.h>
int main() {
    int arr[5]={1,2,3,4,4,2,1},smax,max,i;
    max = INT_MIN;
    smax = INT_MIN;
    for(i=0;i<5;i++){
     if(max<arr[i]){
         smax=max;
     max=arr[i];
     }
     else if(smax<arr[i] && max!=arr[i])
     smax=arr[i];
    }
    printf("%d is second largest element",smax);
    return 0;
}
