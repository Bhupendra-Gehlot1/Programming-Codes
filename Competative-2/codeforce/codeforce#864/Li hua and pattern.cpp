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
    ll n,k;
    cin>>n>>k;
    ll v[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i][j];
        }
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    ll count=0,count1=0;
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(v[i][j]!=v[n-i-1][n-j-1]){
                count++;
            }
        }
    }
    if(n&1){
        for (int i = 0; i < n/2; i++)
        {
            if(v[n/2][i]!=v[n/2][n-i-1]){
                count++;
            }
        }
        
    }
    if(count>k){
        cout<<"NO"<<endl;
        return;
    }
    else{
        k-=count;
        if(k%2==0 || (n&1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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