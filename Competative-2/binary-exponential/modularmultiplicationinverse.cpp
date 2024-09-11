#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int fact[N];
int M = 1e9 + 7;

int power(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a * 1LL) % M;
        }
        a = (a * a) % M;
        b >>= 1;
    }
    return ans % M;
}

int main()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        cin >> n >> k;
        int ans = fact[n];
        int divider = (fact[n - k] * 1LL * fact[k]) % M;
        ans = (ans * 1LL * power(divider, M - 2)) % M;
        cout << ans;
    }
    // cout<<power(2,5);
}