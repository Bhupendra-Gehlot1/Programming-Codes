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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for (int i = 0; i < n-2; i++)
    {
        if(v[i]<0){
            cout<<"NO"<<endl;
            return;
        }else{
            int value=v[i];
            v[i]-=value;
            v[i+1]-=2*value;
            v[i+2]-=value;        
            if(v[i+1]<0 || v[i+2]<0){
            cout<<"NO"<<endl;
            return;
        }
        }        
    }
    if(v[n-2]>0 || v[n-1]>0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    
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