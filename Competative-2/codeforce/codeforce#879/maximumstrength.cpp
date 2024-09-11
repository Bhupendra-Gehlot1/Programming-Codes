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
    string l,r;
    cin>>l>>r;
    int diff=0;
    if(l==r){
        cout<<0<<endl;
        return;
    }
    while (l.size()<r.size())
    {
        l='0'+l;
    }
    for (int i = 0; i < l.size(); i++)
    {
        if(l[i]!=r[i]){
            diff=i;
            break;
        }
    }
    int ans=r[diff]-l[diff];
    int total=ans;
    for (int i = diff+1; i <l.size() ; i++)
    {
        ans+=9;
        total+=(abs(r[i]-l[i]));
    }
    cout<<max(ans,total)<<endl;

    

    
    
    
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