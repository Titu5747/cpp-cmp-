#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
     char str[n];
     for(int i=0;i<n;i++){
        scanf("%c",&str[i]);
     }
     int ans=0;
     for(int i=0;i<n;i++){
        int k=str[i]-'0';
//        ans+=k*pow(2,n);
//        n--;
printf("%d",k);
     }
//     printf("%d",ans);
}
