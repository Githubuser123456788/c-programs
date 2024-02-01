// find the difference between the sum of  elements at even indices to the sum of odd indices
#include <stdio.h>

int main() {
  int arr[50],size,i,sumEven=0,sumOdd=0;
  printf("Enter size of an array :");
scanf("%d",&size);
printf("Enter array elements :\n");
for(i=0;i<size;i++){
  scanf("%d",&arr[i]);
}
printf("Entered array elements are :");
for(i=0;i<size;i++){
  printf("%d\t",arr[i]);
}
for(i=0;i<size;i++){
  if(i%2==0)
  sumEven+=arr[i];
  else
  sumOdd+=arr[i];
}
printf("\ndifference in sum of even to odd indices is %d",sumEven-sumOdd);


  return 0;
}
