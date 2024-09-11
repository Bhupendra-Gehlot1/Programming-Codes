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

ll lcm (ll a , ll b){
    return ((a*b)/(__gcd(a,b)));
}
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll f = __gcd(a,b);
    cout<<lcm(a,f)-__gcd(b,f)<<endl;

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