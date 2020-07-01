#include<iostream>
using namespace std;
int getgcd(int a,int b,int *x,int *y);
int getinverse(int b,int m){
    int x,y;
    int gcd=getgcd(b,m,&x,&y);
    if(gcd!=1)
    return -1;
    else
    return (x%m+m)%m;
}
int divisionmodulo(int a,int b,int m){
    a=a%m;
    int inv=getinverse(b,m);
    if(inv==-1)
    return -1;
    else
    return (inv*a)%m;
}
int getgcd(int a,int b,int *x,int *y){
    if(a==0) 
    { 
        *x=0,*y=1; 
        return b; 
    } 
    int x1,y1;
    int gcd=getgcd(b%a,a,&x1,&y1); 
    *x=y1-(b/a)*x1; 
    *y=x1; 
    return gcd; 
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,m;
        cin>>a>>b>>m;
        cout<<divisionmodulo(a,b,m)<<"\n";
    }
}