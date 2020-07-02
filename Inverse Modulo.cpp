#include<bits/stdc++.h>
using namespace std;
int getgcd(int a,int b,int *x,int *y);
int inversemodulo(int a,int m){
    int x,y;
    int gcd=getgcd(a,m,&x,&y);
    if(gcd!=1)
    return -1;
    else
    return (x%m+m)%m;
}
int getgcd(int a,int b,int *x,int*y){
    if(a==0){
        *x=0,*y=1;
        return b;
    }
    int x1,y1;
    int g=getgcd(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return g;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,m;
        cin>>a>>m;
        cout<<inversemodulo(a,m)<<"\n";
    }
}