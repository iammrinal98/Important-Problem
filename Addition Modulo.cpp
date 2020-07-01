//print (a+b)%m;
#include<bits/stdc++.h>
using namespace std;
const unsigned int m=1000000007;
long long int additionmodulo(long long int a,long long int b){
    long long int temp=((a%m)+(b%m))%m;
    return temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        cout<<additionmodulo(a,b)<<"\n";
    }
}