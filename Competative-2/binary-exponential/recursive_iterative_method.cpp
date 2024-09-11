#include <bits/stdc++.h>
using namespace std;
const int M =1e9+7;

int binaryexponentialrecursive(int a,int b){
    if(b==0) return 1;
    int result = binaryexponentialrecursive(a,b/2);
    if(b&1){
        return (a*((result*result*(1LL))%M)%M);
    }else{
        return (result*1LL*result)%M;
    }
}

int binaryexponentialiterative(int a,int b){
    int ans =1;
    while (b)
    {    
    if(b&1){
        ans=(ans*1LL*a)%M;
    }
    a=(a*a*1LL)%M;
    b>>=1;}
    return ans;
}

int binarmultiply(long long a,long long b){
    int ans=0;
    while (b)
    {
        if(b&1){
        ans=(ans+a)%M;
    }
    a=(a+a)%M;
    b>>=1;
    }
    return ans;
}

int main(){
    int a;
    cin>>a;
    vector<int> b;
    
    
}