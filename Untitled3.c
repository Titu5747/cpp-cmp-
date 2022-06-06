#include<stdio.h>
int main(void){
        int n;
        scanf("%d",&n);
        char str[n];
        for(int i=0;i<n;i++){
            scanf("%c",&str[i]);
        }
        int counter=0;
        for(int i=0;i<n;i++){
            if(str[i]=='('){
                counter++;
               }
               if(str[i]==')'){
                counter--;
               }
        }
        if(counter==0){
            printf("combination right");
        }
        else{
            printf("not good combination");
        }
}
