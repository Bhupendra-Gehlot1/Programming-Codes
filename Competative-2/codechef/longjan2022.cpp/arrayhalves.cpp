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
    int t;
    cin>>t;
    vector<int> v(2*t+1);
    ll index1=0;
    for (int  i = 0; i < 2*t; i++)
    {
        cin>>v[i];
    }
    int target = t;
    for (int  i = 0; i < target; i++)
    {
        if(v[i]>t){
            index1+=(target-i);
            target++;
        }
    }
    cout<<index1<<endl;

    
    
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