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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float f =sqrt((float)(pow(a,2)+pow(b,2)));
    float g =sqrt((float)(pow(d,2)+pow(c,2)));
    if(f>g){
        cout<<"ALEX"<<endl;
    }else if(f<g){
        cout<<"BOB"<<endl;
    }else{
        cout<<"EQUAL"<<endl;
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