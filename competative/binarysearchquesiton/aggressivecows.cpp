#include <bits/stdc++.h>
using namespace std;

// typedef vector<int> vi;
// typedef pair<int , int> vpi;

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

const int N = 1e5;
int n, k;
int v[N];

bool check(int a)
{
    int last_posi = -1;
    int cows_cnt = k;
    for (int i = 0; i < n; i++)
    {
        if (v[i] - last_posi >= a || last_posi == -1)
        {
            cows_cnt--;
            last_posi = v[i];
        }
        if (cows_cnt == 0) break;
            
    }
    return (bool)(cows_cnt == 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v, v+n);
        int lo = 0, hi = v[n-1]-v[0];
        while (hi - lo > 1)
        {
            int mid = (hi + lo) / 2;
            if (check(mid))
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if (check(hi))
        {
            cout << hi << endl;
        }
        else
        {
            cout << lo << endl;
        }
    }

    return 0;
}