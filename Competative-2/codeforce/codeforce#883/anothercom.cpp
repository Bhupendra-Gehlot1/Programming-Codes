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
    int n,m,h;
    cin>>n>>m>>h;
    pair<int,ll> p;
    int ans=1;
    for (int i = 0; i < n; i++)
    {vector<int> v(m);
        for (int j = 0; j < m; j++)
        {
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        ll sum=0;
        int task=0;
        ll pentality=0;
        for (int j = 0; j < m; j++)
        {
            if(sum+v[j]>h){
                break;
            }
            sum+=v[j];
            pentality+=sum;
            task++;
        }
        if(i){
            if(make_pair(-task,pentality)<p) ans++;
        }else{
            p={-task,pentality};
        }
    }
    
       cout<<ans<<endl;
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