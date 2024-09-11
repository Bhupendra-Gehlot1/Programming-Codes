#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> vpi;

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define mod 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(c) c.begin(), c.end()
#define endl '\n'
#define Gap " "

static bool cmt(int a, int b)
{
    return a > b;
}

void solve()
{
    int n;
    cin>>n;
    vi v1(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }    
    bool flag1=true;
    bool flag2=true;
    for(int i=0;i<n;i++){
        if(v1[i]!=v2[i]){
            flag1=false;            
        }
        if(v1[i]!=v2[n-1-i]){
            flag2=false;
        }
    }
    if(flag1 || flag2){
        cout<<"Bob"<<endl;        
    }
    else{
        cout<<"Alice"<<endl;
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