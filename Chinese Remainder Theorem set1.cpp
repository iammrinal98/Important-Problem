#include<bits/stdc++.h>
using namespace std;
int getvalue(int arr[],int rem[],int n){
    int x=1;
    while(true){
    int j;
    for(j=0;j<n;j++){
        if(x%arr[j]!=rem[j])
        break;
    }
    if(j==n)
    return x;
    x++;
   }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],rem[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>rem[i];
        }
        cout<<getvalue(arr,rem,n)<<"\n";
    }
}