#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int , int> vpi;

#define FOR(i, a, b) for(int i = a; i < b ; i++)
#define ll long long
#define mod 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(c) c.begin() , c.end()
#define endl '\n'
#define Gap " "

void solve()
{
    int n,k;
    cin>>n>>k;
    vi v(n);
    ll total=0;
    ll maxi=0;
    int M=1000000000+7;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total=(total+(v[i]));                
        if(total<0) total=0;        
        maxi=max(maxi,total);
    }
    // cout<<maxi<<endl;
    ll value=0;        
    for(int i=0;i<k;i++){
        value=(value+maxi)%M;
        maxi=(maxi+maxi)%M;
    }
    total=0;    
    for(int i=0;i<n;i++){
        total=(total+v[i]);
    }
    total=(total+value)%M;
    if(total<0) total+=M;
    cout<<total<<endl;

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T-- != 0)
    {
        solve();
    }
    return 0;
}