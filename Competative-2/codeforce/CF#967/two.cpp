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
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    if(n%2==0){
        cout<<"-1"<<endl;
        return;
    }
    int ind1 = (n/2);
    int ind2 = ind1+1;
    int x=1;
    for (int i = ind1; i >=0; i--)
    {
        v[i]=x;
        x++;
    }    
    for(int i=ind2;i<n;i++){
        v[i]=x;
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    
    
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