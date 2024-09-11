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
    pair<int,int> p;
    vector<pair<int,int>> v(n);
    int main=0;
    int index=0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(b>=main){
            if(a<=10){
                index=i+1;
                main=b;
            } 
        }
    }
    cout<<index<<endl;

    // }
    // sort(v.begin(),v.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    
    
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