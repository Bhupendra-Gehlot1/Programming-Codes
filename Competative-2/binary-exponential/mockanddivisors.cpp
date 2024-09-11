#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int hsh[N];
int multiples_count[N];
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        hsh[x]++;
    }
    for (long long i = 1; i <= N; i++)
    {
        for (long long j = i; j <= N; j+=i)
        {
            multiples_count[i]+=hsh[j];
        }
    }
    int t;
    cin>>t;
    while (t--)
    {
        int p,q;
        cin>>p>>q;
        long long ans=multiples_count[p]+multiples_count[q];
        long long lcm =(p*q*1LL)/__gcd(p,q);
        if(lcm<2e5){
            ans-=multiples_count[lcm];
        }
        cout<<ans<<endl;
    }
       
    
}