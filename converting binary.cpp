#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void){
     int t;
     cin>>t;
     while(t-->0){
        int m,a,b;
        cin>>m>>a>>b;
        string bits1,bits2;
        while(m>0){
            bits1.append(to_string(a%2));
            a/=2;
        }
        while(n>0){
            bits2.append(to_string(b%2));
            b/=2;
        }
        reverse(bits1.begin(),bits1.end());
        reverse(bits2.begin(),bits2.end());

     }
}
