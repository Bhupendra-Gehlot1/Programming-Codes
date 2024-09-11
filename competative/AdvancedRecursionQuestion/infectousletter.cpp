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
    string s;
    cin>>s;
    bool f =true;
    int ans=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='a'){
            if(f){
                f=false;
                ans+=i+1;
            }
        }else if(s[i]=='b'){
            if(f){
                f=false;
            }
            
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