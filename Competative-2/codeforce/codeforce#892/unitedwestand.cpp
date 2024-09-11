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
    vi a,b,c;
    for (int i = 0; i < n; i++)
    {
        int f;
        cin>>f;
        a.push_back(f);
    }
    sort(a.begin(),a.end());
    if(a.back()==a[0]) {
        cout<<-1<<endl;
        return;
    }else{
        int f=0;
        while (a[f]==a[0])
        {
            f++;
        }
        cout<<f<<" "<<n-f<<endl;
        for (int i = 0; i < f; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for (int i = f; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;   
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