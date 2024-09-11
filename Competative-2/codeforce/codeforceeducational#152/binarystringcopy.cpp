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
    unordered_set<string> u;
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    
    for (int i = 0; i < b; i++)
    {
        string x =s;
        int f,g;
        cin>>f>>g;        
        sort(x.begin()+f-1,x.begin()+g-1);
        u.insert(x);
    }
    cout<<u.size()<<endl;

    

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