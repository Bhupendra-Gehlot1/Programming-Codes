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
    vector<long long> v(n);
    long long ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<long long> prefix(n);
    vector<long long> suffix(n);
    prefix[0]=v[0];
    suffix[n-1]=v[n-1];
    for (int i = 1; i < n; i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
    for (int i = n-2; i >=0; i--)
    {
        suffix[i]=suffix[i+1]+v[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        ans=max(ans,__gcd(prefix[i],suffix[i+1]));
    }
    cout<<ans<<endl;
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