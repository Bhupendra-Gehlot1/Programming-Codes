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
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int zero =count(ALL(v),0);
    int ans=0;
    if(zero>0){
        cout<<n-zero<<endl;
    }else {
        for (int i = 0; i < n-1; i++)
        {
            if(v[i]==v[i+1]){
                ans++;
            }
        }
        if(ans){
            cout<<n<<endl;
        }else{
            cout<<n+1<<endl;
        }
        
    }
    
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