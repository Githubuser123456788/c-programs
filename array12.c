/* to check whether the element is present in array and finding its index */
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7},x,i,flag;
    x = 5;
    int idx = INT_MIN;
    flag = false;
    for(i=0;i<7;i++){
        if(x==arr[i]){
        flag = true;
            idx = i;
         break;
         }
        }
    if(flag==true)
    printf("%d element is found at %d index",x,idx);
    else
    printf("element not found in the array");

}
