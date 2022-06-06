#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool sorted(int arr1[],int s){
  for(int i=0;i<s;i++){
    if(arr1[i]<arr1[i+1]){
        continue;
    }
    else{
        return false;
    }
  }
  return true;
}
int main(void){
   int n,k;
   scanf("%d%d",&n,&k);
   int arr[n];
   int temp;
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   for(int i=0;i<n-1;i++){
    for(int j=i;j<n;j+=k){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   if(sorted(arr,n)){
      printf("yes");
    }
    else{
        printf("false");
    }
}
