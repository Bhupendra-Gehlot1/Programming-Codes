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
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        b[i]=v[i];
    }
    sort(b.begin(),b.end());
    int j=n-1;
    while (v[j]==b[j])
    {
        j--;
    }
    int maxi=0;
    for (int i = 0; i < j; i++)
    {
        maxi=max(maxi,v[i]);
    }
    cout<<maxi<<endl;
    
    
    
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