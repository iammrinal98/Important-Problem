//How many numbers between 1 and n, including both, are divisible by a or b?
#include<bits/stdc++.h>
using namespace std;
int getvalue(int n,int a,int b){
    int count1=n/a;
    int count2=n/b;
    int count3=(n/(a*b));
    return count1+count2-count3;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        cin>>a;
        cin>>b;
        cout<<getvalue(n,a,b)<<"\n";
    }
}