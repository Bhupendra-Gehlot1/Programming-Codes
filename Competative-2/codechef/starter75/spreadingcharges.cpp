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

void solve()
{
    int ee;
    cin>>ee;
    string strringg;
    cin>>strringg;
    int count=0;
    vector<int> vv;
    for (int i = 0; i < ee; i++)
    {
        if(strringg[i]!='0') vv.push_back(i);
    }
    if(vv.size()==0)  {cout<<ee<<endl; return;}
    if(vv.size()==1) {cout<<0<<endl; return;}

    for (int i = 0; i < vv.size()-1; i++)
    {
        if(strringg[vv[i]]!=strringg[vv[i+1]]){
            int f=vv[i+1]-vv[i]-1;
            if(f%2!=0) count++;
        }
    }
    cout<<count<<endl;
    
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