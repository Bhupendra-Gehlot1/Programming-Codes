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
      ll a,b;
      cin>>a>>b;
      string f;
      cin>>f;
      ll pos=a;
      string x =to_string(b);
      for (int i = 0; i < f.size(); i++)
      {
        if((f[i]-'0')<b){
            pos=i;
            break;
        }
      }
      if(pos==a){
        cout<<f<<x<<endl;
        return;
      }
      for (int i = 0; i < pos; i++)
      {
        cout<<f[i];
      }cout<<x;
      for (int i = pos; i <f.size(); i++)
      {
        cout<<f[i];
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