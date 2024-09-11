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
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(ALL(v), cmt);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0) ans+=v[i];        
        else {
            int value = min(v[i-1]-v[i],k);
            k-=value;
            v[i]+=value;
            ans-=v[i];
        }
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