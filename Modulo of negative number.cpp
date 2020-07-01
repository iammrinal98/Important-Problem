#include<bits/stdc++.h>
using namespace std;
int getmodulo(int a,int m){
    return ((a%m)+m)%m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,m;
        cin>>a>>m;
        cout<<getmodulo(a,m)<<"\n";
    }
}