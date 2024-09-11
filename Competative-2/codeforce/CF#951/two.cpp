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

void solve()
{
    int x, y;
    cin >> x >> y;
    int value = x ^ y;
    long long ans = 1;
    long long temp = 1;
    while (true)
    {
        // cout << value << "hello" << (value & 1) << endl;
        if (value & 1 == 1)
        {
            break;
        }
        value /= 2;
        ans += (temp);
        temp *= 2;
    }
    cout << ans << endl;
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