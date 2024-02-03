// write a program to copy content of one array to another in reverse order
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5},i,brr[5];
    
    i=0;
    while(i<5){
        brr[4-i]=arr[i];
        i++;
    }
    printf("Array in Reverse order is :\n");
    i=0;
    while(i<5){
        printf("%d\t",brr[i]);
        i++;
    }
}
