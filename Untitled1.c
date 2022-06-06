#include<stdio.h>
#include<stdlib.h>
int  sorted(int arr[],int n){
    int counter=0;
     for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            continue;
        }
        else{
            counter++;
        }
    }
    if(counter!=0){
        return 5;
    }
    else{
        return 4;
    }
}
int main(void){
    int t;
    scanf("%d",&t);
    while(t-->0){
  int n,k;
  scanf("%d%d",&n,&k);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<=n;j+=k){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
  }
  int x=sorted(arr,n);
  if(x==5){
    printf("sorted");
  }
  else{
    printf("not sorted");
  }
    }

}
