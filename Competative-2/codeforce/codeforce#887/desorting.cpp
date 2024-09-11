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
    vi v(n);
    int count=0;
    int mini=INT_MAX;
    FOR(i,0,n){
        cin>>v[i];
    }FOR(i,1,n){
        if(v[i]<v[i-1]){
            count++;
        }
        mini=min((v[i]-v[i-1]),mini);
    }
    if(count!=0) {cout<<0<<endl;}
    else{
    cout<<(mini/2)+1<<endl;}

    
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