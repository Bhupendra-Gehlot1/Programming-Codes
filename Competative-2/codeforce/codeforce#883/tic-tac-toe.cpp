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
    string a,b,c;
    cin>>a>>b>>c;
    for (int i = 0; i < 3; i++)
    {
        if(a[i]==b[i] && b[i]==c[i] && b[i]!='.'){
            cout<<a[i]<<endl;
            return;
        }
    }if(a[0]==a[1] && a[1]==a[2] && a[1]!='.') {cout<<a[1]<<endl; return;}
    else if(b[0]==b[1] && b[1]==b[2] && b[1]!='.') {cout<<b[1]<<endl;return;}
    else if(c[0]==c[1] && c[1]==c[2] && c[1]!='.') {cout<<c[1]<<endl;return;}
    else if(a[0]==b[1] && b[1]==c[2] && b[1]!='.') {cout<<a[0]<<endl;return;}
    else if(a[2]==b[1] && b[1]==c[0] && b[1]!='.') {cout<<c[0]<<endl;return;}
    else{cout<<"DRAW"<<endl;return;}
    
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