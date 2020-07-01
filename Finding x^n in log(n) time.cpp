#include<bits/stdc++.h>
using namespace std;
float getpower(float x,int n){
    if(n==0)
    return 1;
    float temp=pow(x,n/2);
    if(n%2==0)
    return temp*temp;
    else{
        if(n>0)
        return x*(temp*temp);
        else
        return (temp*temp)/x;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        float x;
        int n;
        cin>>x>>n;
        cout<<getpower(x,n)<<"\n";
    }
}