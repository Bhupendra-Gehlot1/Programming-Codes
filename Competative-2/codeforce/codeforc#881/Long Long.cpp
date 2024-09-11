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
    int n;
    cin>>n;
    vector<ll> v(n);
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]<0){
            ans+=(-v[i]);
        }else{
            ans+=v[i];
        }
    }
    ll start=0;
    ll count=0;
    while (start<n)
    {
        if(v[start]<0){
            count++;
            while (v[start]<=0)
            {
                start++;
            }
        }
        start++;
    }
    cout<<ans<<" "<<count<<endl;
    return;
    
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