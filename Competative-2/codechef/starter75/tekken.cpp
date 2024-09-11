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
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"YES"<<endl;
        return;
    }
    int f=max(c,b)-min(c,b);
    if(a>f){
        cout<<"YES"<<endl;
        return;
    }else{
        cout<<"NO"<<endl;
        return;
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