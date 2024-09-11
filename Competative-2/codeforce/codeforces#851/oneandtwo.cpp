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
    int two =0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]==2){
            two++;
        }
    }
    int two1=0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]==2){
            two1++;}
            if(two1*2==two){
                cout<<i+1<<endl;
                return;
        }
    }
    cout<<-1<<endl;
    
    
    
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