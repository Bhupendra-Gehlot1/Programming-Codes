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

int help(vector<int> &arr, int index, int prev, int n, vector<vector<int>> &dp)
{
    if (index == n)
        return 0;
    if (dp[index][prev + 1] != -1)
        return dp[index][prev + 1];
    int not_take = help(arr, index + 1, prev, n, dp);
    int take = 0;
    if (prev == -1 || arr[prev] < arr[index])
    {
        take = arr[index] + help(arr, index + 1, index, n, dp);
    }
    return dp[index][prev + 1] = max(take, not_take);
}


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> helper(n);
    for (int i = 0; i < n; i++)
    {
        helper[i] = (a[i] * b[i] * a[i]) % mod;
    }    
    
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    int ans = help(helper, 0, -1, n, dp);
    cout << ans << endl;
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