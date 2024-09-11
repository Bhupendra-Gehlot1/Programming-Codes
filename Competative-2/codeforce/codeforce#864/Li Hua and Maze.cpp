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
    int n,m;
    cin>>n>>m;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
        if(((a==1 || a==n) && (b==1 || b==m)) || ((c==1 || c==n) && (d==1 || d==m))){
            cout<<2<<endl;
            return;
        }if(a==1 || b==1 || c==1 || d==1 || a==n || b==m || c==n || d==m){
            cout<<3<<endl;
            return;
        }cout<<4<<endl;
    
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