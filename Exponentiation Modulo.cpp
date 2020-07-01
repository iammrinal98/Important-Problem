#include<bits/stdc++.h>
using namespace std;
int exponentialmodulo(int a,unsigned int b,int m){
    int temp=1;
    a=a%m;
    if(a==0)
    return 0;
    while(b>0){
        if(b&1)
           temp=(temp*a)%m;
        b>>1;
        a=(a*a)%m;
    }
    return temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,m;
        cin>>a>>b>>m;
        cout<<exponentialmodulo(a,b,m)<<"\n";
    }
    return 0;
}