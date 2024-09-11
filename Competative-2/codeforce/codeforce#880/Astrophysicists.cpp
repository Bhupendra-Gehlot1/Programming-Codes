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
    ll n,g,k;
    cin>>n>>g>>k;
    ll save=min((n-1)*((k-1)/2),k*g);
    ll remain=g*k-save;
    ll r=remain%k;
    if(r>=(k+1)/2){
        save-=(k-r);
    }else{
        save+=r;
    }
    cout<<save<<endl;
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