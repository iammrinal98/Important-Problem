#include<bits/stdc++.h>
using namespace std;
const unsigned int m=1000000007;
unsigned long long modfactorial(int n){
    unsigned long long f=1;
    for(int i=1;i<=n;i++){
        f=(f*i)%m;
    }
    return f;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<modfactorial(n)<<"\n";
    }
}