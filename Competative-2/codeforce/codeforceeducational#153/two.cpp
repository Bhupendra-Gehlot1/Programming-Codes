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
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   if(c>=a || (a%b<=c && a/b<=d)){
    cout<<0<<endl;
   }else{
    int x=min(a/b,d);
    int y=min(a-b*x,c);
    int main=a-y-b*x;
    if(main%b==0){
        cout<<main/b<<endl;
    }else if((b-main%b)<=y){
        cout<<(main/b)+1<<endl;
    }else{
        cout<<(main/b)+(main%b)<<endl;
    }
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