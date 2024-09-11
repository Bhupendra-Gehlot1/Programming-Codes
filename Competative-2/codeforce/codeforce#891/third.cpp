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
    int m=(n*(n-1))/2;
    map<int ,int> mp;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    int r=n-1;
    vector<int> a;
    for (auto x:mp)
    {
        if(r==x.second){
            a.push_back(x.first);
            r--;
        }else{
            int t=r,p=0;
            while (t>0 && x.second!=p)
            {
                p+=t;
                t--;
                a.push_back(x.first);
            }
            r=t;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    int f=a.size();
    while (f!=n)
    {
        cout<<1000000000<<" ";
        f++;
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