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
{   ll a,b;
    cin>>a>>b;
    ll n =a*b-a-b;
    if(a==1 && b==1){
        cout<<5<<endl;
        return;
    }if(n==-1){
        cout<<max(a,b)-1<<endl;
        return;
    }if(n==0){
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;
    



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