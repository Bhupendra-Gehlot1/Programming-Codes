#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> vpi;

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define mod 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(c) c.begin(), c.end()
#define endl '\n'
#define Gap " "

static bool cmt(int a, int b)
{
    return a > b;
}

void solve()
{
    long long n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].F>>v[i].S;
    }
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll time = (b-d)*(b-d) + (c-a)*(c-a);
    for(int i=0;i<n;i++){
        ll x = (v[i].F-c)*(v[i].F-c) + (v[i].S - d)*(v[i].S-d);
        if(x<=time){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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