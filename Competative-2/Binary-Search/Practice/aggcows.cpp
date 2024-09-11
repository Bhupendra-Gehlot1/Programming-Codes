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

 bool check(vector<int> &stalls, int cows, int distance)
{
    int n = stalls.size();
    int count = 0;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        if (prev == 0)
        {
            prev = stalls[i];
            count++;
        }
        else if (stalls[i] - prev <= distance)
        {
            prev = stalls[i];
            count++;
        }
        else
        {
            continue;
        }
    }
    cout<<count<<" "<<distance<<endl;
    return count >= cows;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout<<a<<b<<endl;
    vi v(a);
    cout<<"hello";
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    cout<<"hello";
    sort(v.begin(), v.end());
    int i = 0, j = *max_element(v.begin(),v.end());
    int maxi = 0;    
    while (i < j)
    {
        int mid = (i + j) / 2;
        if (check(v, b, mid))
        {
            maxi = max(maxi, mid);
            i = mid;
        }
        else
        {
            j = mid - 1;
        }
    }
    cout << maxi << endl;
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