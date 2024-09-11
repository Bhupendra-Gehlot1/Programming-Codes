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

int longestSubSegzero(string a, int n, int k)
{
    int cnt0 = 0;
    int l = 0;
    int max_len = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] == '1')
            cnt0++;
        while (cnt0 > k) {
            if (a[l] == '1')
                cnt0--;
            l++;
        }
 
        max_len = max(max_len, i - l + 1);
    }
 
    return max_len;
}
int longestSubSegone(string a, int n, int k)
{
    int cnt1 = 0;
    int l = 0;
    int max_len = 0;
 
    for (int i = 0; i < n; i++) {
        if (a[i] == '0')
            cnt1++;
        while (cnt1 > k) {
            if (a[l] == '0')
                cnt1--;
            l++;
        }
        
        max_len = max(max_len, i - l + 1);
    }
 
    return max_len;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int zero=longestSubSegzero(s,n,k);
    int one=longestSubSegone(s,n,k);
    for (int i = 0; i < n; i++)
    {
        cout<<max(i*zero+one,)
    }
    
    cout<<endl;
    
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