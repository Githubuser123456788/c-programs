// write a program to find that given array is palindrome or not
#include <stdio.h>
int main() {
    int arr[5]={1,2,3,2,1},j,i,count=0;
    for(i=0,j=4;i<5,j<=0;i++,j--){
     if(arr[i]=arr[j])
     count+=1;
    }
    if(count=5)
    printf("It is an palindrome array");
    else
    printf("It is not a palidrome array");
    return 0;
}
