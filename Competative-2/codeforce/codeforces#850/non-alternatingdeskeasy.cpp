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
    ll n;
    cin>>n;
    ll alice=0,bob=0;
    bool f = true;
    ll temp =1;
    while (n>0) 
    {
        if(f){
            alice+=min(n,temp);
            f=false;
        }else{
            bob+=min(n,temp);
            f= true;
        }
        n-=temp;
        temp+=4;
    }
    
    cout<<alice<<" "<<bob<<endl;
    
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