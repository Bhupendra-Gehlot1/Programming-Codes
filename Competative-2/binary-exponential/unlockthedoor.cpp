#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;
int fact[N];
int M = 1e9 + 7;

int binaryexponentialiterative(int a, int b)
{
    int ans = 1;
    while (b>0)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * a * 1LL) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        fact[i] = (fact[i - 1] * i * 1LL) % M;
    }
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans=fact[n];
        ans=(ans*1LL*fact[k])%M;
        int deivider=(fact[k-n]*1LL*fact[n])%M;
        ans=(ans*1LL*binaryexponentialiterative(deivider,M-2))%M;
        cout<<ans<<endl;
    }
}