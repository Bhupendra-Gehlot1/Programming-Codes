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
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    string c=b;
    reverse(c.begin(),c.end());
    if(a==c){
        cout<<2<<endl;
        return;
    }
    int org=0;
    int rev=0;
    int count=0;
    int ans=0;
    for (int i = 0; i < c.size(); i++)
    {
        if(a[i]!=b[i]) org++;
        if(c[i]!=a[i]) rev++;
    }
    // cout<<rev<<" "<<org<<endl;
    if(rev%2){
        rev=2*rev;
    }else{
        rev=max(2*rev-1,2);
    }
    if(org%2){
        org=max(0,2*org-1);
    }else{
        org=2*org;
    }
    cout<<min(org,rev)<<endl;
    
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