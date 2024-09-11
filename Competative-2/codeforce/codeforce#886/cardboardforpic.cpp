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
    int n, c; cin >> n >> c;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int l = 1, r = 1e9;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        int small = 0;
        for(int i = 0; i < n; ++i) {
            small += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(small > c) break;
        }
        if(small == c) {
            cout << mid << "\n";
            return;
        }
        if(small > c) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
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