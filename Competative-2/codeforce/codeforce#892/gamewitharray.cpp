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
    ll total=0;
    int smallest1=INT_MAX,smallest2=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        smallest2=min(smallest2,v[1]);
        smallest1=min(smallest1,v[0]);
        total+=v[1];
    }
    total-=smallest2;
    total+=smallest1;
    cout<<total<<endl;
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