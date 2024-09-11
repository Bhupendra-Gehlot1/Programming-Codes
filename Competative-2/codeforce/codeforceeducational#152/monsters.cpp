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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return a.first==b.first && a.first!=0?(a.second>b.second):(a.first<b.first);
}

void solve()
{
    int a,b;
    cin>>a>>b;
    vector<int> v(a);
    vector< pair <int,int> > vect;
    FOR(i,0,a){
        cin>>v[i];
        vect.push_back(make_pair(v[i]%b,i+1));
    }
    sort(vect.begin(), vect.end(),sortbysec);
    int f=0;
    while (vect[f].first==0)
    {
        cout<<vect[f].second<<" ";
        f++;
    }
    for (int i = a-1; i >= f; i--)
    {
        cout<<vect[i].second<<" ";
    }
    // for (int i = 0; i <a ; i++)
    // {
    //     cout<<vect[i].first<<" "<<vect[i].second<<endl;
    // }
    
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