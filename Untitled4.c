#include<stdio.h>
int main(void){
        int t;
        scanf("%d",&t);
        while(t--){
            int n,k;
            scanf("%d%d",&n,&k);
            int arr[n];
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            int ans;
            for(int i=0;i<pow(2,n);i++){
                ans=0;
                for(int j=0;j<n;j++){
                    if((i &(1<<j))!=0){
                        ans+=arr[j];
                    }
                }

            }
             if(ans==k){
                    printf("matched");
                }
                else{
                    printf("not matched");
                }
        }

}
